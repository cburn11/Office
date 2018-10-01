#pragma once

#define FLAG_SOURCE_LITERAL		0x0001
#define FLAG_SOURCE_FILE		0x0002
#define FLAG_SOURCE_FILELIST	0x0004

#ifdef __cplusplus
extern "C" {
#endif //__cplusplis

	__declspec( dllimport ) BOOL hash(WCHAR * szAlg, BYTE * pIn, DWORD cbIn, BYTE ** pHash, DWORD * pcbHash);

	struct tagMultiHash {
		BCRYPT_HASH_HANDLE	hHash;
		BYTE *				pHashObject;
		ULONG				cbHashObject;
		BYTE *				pHash;
		ULONG				cbHash;
	};

	typedef struct tagMultiHash MULTI_HASH_OBJ;

	__declspec( dllimport ) BOOL InitMultiHash(WCHAR * szAlg, MULTI_HASH_OBJ ** ppObj);
	__declspec( dllimport ) BOOL MultiHash(MULTI_HASH_OBJ * pObj, BYTE * pIn, ULONG cbIn);
	__declspec( dllimport ) BOOL FinishMultiHash(MULTI_HASH_OBJ * pObj, BYTE ** ppHash, ULONG * pcbHash);

#ifdef __cplusplus
}
#endif //__cplusplus