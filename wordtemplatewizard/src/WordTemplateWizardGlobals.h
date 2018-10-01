

extern _Application		* g_pWordApp;		//	main.c

extern _Document		* g_pDoc;			//	main.c


struct tagWTWTag {
	WCHAR		* szTag;
	WCHAR		* szText;
	UINT		cchTag;
	UINT		cchText;
};

typedef struct tagWTWTag TAG, * PTAG;


extern	PTAG			g_pTags;				//	main.c

extern INT				g_cTags;				//	main.c



#define TAG_BUFFER_INIT_COUNT	15

#define RANGE_MAX_INSERT		100

struct KeyDownBitField {
	unsigned short extended		: 1;
	unsigned short reserved		: 4;
	unsigned short context		: 1;
	unsigned short previous		: 1;
	unsigned short transition	: 1;
};


//	Error codes for LoadTags function
#define LT_ERROR_MEM			1
#define LT_ERROR_CONTENT		2
#define LT_ERROR_FIND			3

#define SUBKEY_PATH				L"Software\\Clifford\\WordTemplateWizard"