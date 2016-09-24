// MFCDynCreate.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MFCDynCreate.h"



/////////////////////////////////////////////////////////////////////////////
// The one and only application object

using namespace std;

class CAnimal:public CObject{
	DECLARE_DYNCREATE(CAnimal)
};
IMPLEMENT_DYNCREATE(CAnimal,CObject)

class CDog:public CAnimal{
//	DECLARE_DYNCREATE(CDog)
public:
	static const AFX_DATA CRuntimeClass classCDog; 
	virtual CRuntimeClass* GetRuntimeClass() const;
	static CObject* PASCAL CreateObject();
};
//IMPLEMENT_DYNCREATE(CDog,CAnimal)
	CObject* PASCAL CDog::CreateObject() { 
		return new CDog; 
	} 
//	IMPLEMENT_RUNTIMECLASS(class_name, base_class_name, 0xFFFF, 
//		class_name::CreateObject)
	AFX_COMDAT const AFX_DATADEF CRuntimeClass CDog::classCDog = {
		"CDog", 
		sizeof(class CDog),
		0xFFFF,
		CDog::CreateObject,		//m_fnCreateObject
		RUNTIME_CLASS(CAnimal),
		NULL 
	}; 

/*
		struct CRuntimeClass
		{
		// Attributes
		LPCSTR m_lpszClassName;
		int m_nObjectSize;
		UINT m_wSchema; // schema number of the loaded class
		CObject* (PASCAL* m_pfnCreateObject)(); // NULL => abstract class
	
	    CRuntimeClass* m_pBaseClass;

		  // Operations
		  CObject* CreateObject();
		  BOOL IsDerivedFrom(const CRuntimeClass* pBaseClass) const;
  
			// Implementation
			void Store(CArchive& ar) const;
			static CRuntimeClass* PASCAL Load(CArchive& ar, UINT* pwSchemaNum);
			
			  // CRuntimeClass objects linked together in simple list
			  CRuntimeClass* m_pNextClass;       // linked list of registered classes
		};
	*/

	CRuntimeClass* CDog::GetRuntimeClass() const{ 
		return ((CRuntimeClass*)(&CDog::classCDog)); 
		////RUNTIME_CLASS
	} 
	
int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
	CObject *pObject=RUNTIME_CLASS(CDog)->CreateObject();
	if(pObject->IsKindOf(RUNTIME_CLASS(CDog))){
		printf("%p\n",pObject);
	}else{
		printf("nothing");
	}
	return 0;
}


