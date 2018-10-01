#pragma once

#ifdef __cplusplus
extern "C" {
#endif //	__cplusplus


	__declspec( dllimport ) HRESULT
		AutowrapInvoke(int type, VARIANT * pvResult,
			void * pDisp, OLECHAR * szName, int cArgs, ...);

	__declspec( dllimport ) HRESULT
		AutowrapNamedInvoke(VARIANT * pvResult,
			void * pDisp, OLECHAR * szName, int cArgs, ...);

	__declspec( dllimport ) HRESULT
		GetDispProperty(void * pdisp, OLECHAR * szName,
			VARIANT * pvResult);

	__declspec( dllimport ) HRESULT
		PutDispProperty(void * pdisp, OLECHAR * szName,
			VARIANT * pvValue, VARIANT * pvResult);

#ifdef __cplusplus
}
#endif //	__cplusplus

#define MOVE_DISP_RESULT(pvarResult, toPTR)	toPTR = (pvarResult)->pdispVal; \
	IDispatch_AddRef(toPTR); \
	IDispatch_Release((pvarResult)->pdispVal);

#define TRANSFORM_DISP_RESULT(pvarResult, ptoPTR, ptoIID)	IDispatch_QueryInterface( \
	(pvarResult)->pdispVal, (ptoIID), (ptoPTR)); \
	IDispatch_Release((pvarResult)->pdispVal);