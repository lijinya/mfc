// MFCDynamic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MFCDynamic.h"

class CAnimal:public CObject{
//	DECLARE_DYNAMIC(CAnimal)
//#define DECLARE_DYNAMIC(class_name) 
public: 
	static const AFX_DATA CRuntimeClass classCAnimal; 
	virtual CRuntimeClass* GetRuntimeClass() const; 
	
};
//IMPLEMENT_DYNAMIC(CAnimal,CObject) //-------->
//IMPLEMENT_RUNTIMECLASS(CDog,CAnimal, 0xFFFF, NULL)

	AFX_COMDAT const AFX_DATADEF 
	CRuntimeClass CAnimal::classCAnimal = { 
		"CAnimal",
		sizeof(class CAnimal),
		0xFFFF,
		NULL,	//m_pfnCreateObject
		((CRuntimeClass*)(&CAnimal::classCAnimal)),
		NULL 
	}; 
	CRuntimeClass* CAnimal::GetRuntimeClass() const {
		//		return RUNTIME_CLASS(CAnimal); 
		return ((CRuntimeClass*)(&CAnimal::classCAnimal));
	} 

//#define RUNTIME_CLASS(class_name) 
//	((CRuntimeClass*)(&class_name::class##class_name))

class CDog:public CAnimal{
//	DECLARE_DYNAMIC(CDog)
public: 
	static const AFX_DATA CRuntimeClass classCDog; 
	virtual CRuntimeClass* GetRuntimeClass() const; 

};
//IMPLEMENT_DYNAMIC(CDog,CAnimal)  //--->
//----->IMPLEMENT_RUNTIMECLASS(class_name, base_class_name, 0xFFFF, NULL)

AFX_COMDAT const AFX_DATADEF CRuntimeClass CDog::classCDog = { 
		"CDog",
		sizeof(class CDog), 
		0xFFFF, 
		NULL, 
		((CRuntimeClass*)(&CAnimal::classCAnimal)),
		NULL
 }; 
CRuntimeClass* CDog::GetRuntimeClass() const { 
	return ((CRuntimeClass*)(&CDog::classCDog)); 
} 

int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
	CDog yellowDog;
	if(yellowDog.IsKindOf(RUNTIME_CLASS(CDog))){	
		printf("yellowDog is CDog!\n");
	}else{
		printf("yellowDog isnot CDog!\n");
	}
	return 0;
}


