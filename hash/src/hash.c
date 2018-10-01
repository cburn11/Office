#include <Windows.h>
#include <bcrypt.h>

#include "hash.h"

#pragma comment(lib, "Bcrypt.lib")

BOOL hash(WCHAR * szAlg, BYTE * pIn, DWORD cbIn, BYTE ** ppHash, DWORD * pcbHash) {

	MULTI_HASH_OBJ		* pObj;
	//BYTE				* pHash;
	//ULONG				cbHash;

	InitMultiHash(szAlg, &pObj);

	MultiHash(pObj, pIn, cbIn);

	FinishMultiHash(pObj, ppHash, pcbHash);

	return TRUE;
}

BOOL InitMultiHash(WCHAR * szAlg, MULTI_HASH_OBJ ** ppObj) {

	BCRYPT_ALG_HANDLE		hAlg = NULL;
	BCRYPT_HASH_HANDLE		hHash = NULL;

	NTSTATUS				ret;

	MULTI_HASH_OBJ			* pObj;

	ULONG					cbWritten;

	ret = BCryptOpenAlgorithmProvider(&hAlg, szAlg, NULL, 0);

	pObj  = (MULTI_HASH_OBJ *) calloc(1, sizeof(MULTI_HASH_OBJ));

	ret = BCryptGetProperty(hAlg, BCRYPT_HASH_LENGTH,
		(UCHAR *) &(pObj->cbHash), sizeof(pObj->cbHash), &cbWritten, 0);
	pObj->pHash = (BYTE *) calloc(1, pObj->cbHash);

	ret = BCryptGetProperty(hAlg, BCRYPT_OBJECT_LENGTH,
		(UCHAR *) &(pObj->cbHashObject), sizeof(&(pObj->cbHashObject)), &cbWritten, 0);
	pObj->pHashObject = (BYTE *) calloc(pObj->cbHashObject, sizeof(BYTE));

	ret = BCryptCreateHash(hAlg, &(pObj->hHash), pObj->pHashObject,
		pObj->cbHashObject, NULL, 0, 0);

	*ppObj = pObj;

	BCryptCloseAlgorithmProvider(hAlg, 0);

	return TRUE;
}

BOOL MultiHash(MULTI_HASH_OBJ * pObj, BYTE * pIn, ULONG cbIn) {
	
	BCryptHashData(pObj->hHash, (UCHAR *) pIn, cbIn, 0);

	return TRUE;
}

BOOL FinishMultiHash(MULTI_HASH_OBJ * pObj, BYTE ** ppHash, ULONG * pcbHash) {

	NTSTATUS				ret;

	ret = BCryptFinishHash(pObj->hHash, pObj->pHash, pObj->cbHash, 0);

	*ppHash = pObj->pHash;
	*pcbHash = pObj->cbHash;

	BCryptDestroyHash(pObj->hHash);

	free(pObj->pHashObject);
	free(pObj);

	return TRUE;
}