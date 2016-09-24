// DllInterface.cpp : Defines the entry point for the DLL application.
//

#include "stdafx.h"

#include "math.h"


class CIMath:public IMath{
public:
	CIMath(){
		m_nRef=0;
	}
	virtual	int Add(int nAdd1,int nAdd2);
	virtual	int Sub(int nSub1,int nSub2);
	virtual LONG	AddRef();
	virtual LONG	Release();
	LONG	m_nRef;
};
LONG	CIMath::AddRef(){
	//mutli thread
	InterlockedIncrement(&m_nRef);
	return m_nRef;
}
LONG	CIMath::Release(){
	InterlockedDecrement(&m_nRef);
	if(m_nRef<=0){
		delete this;
	}
	return m_nRef;
}
int CIMath::Add(int nAdd1,int nAdd2){
	return nAdd1+nAdd2;
}
int CIMath::Sub(int nSub1,int nSub2){
	return nSub1-nSub2;
}
class CIMath1:public IMath{
public:
	CIMath1(){
		m_nRef=0;
	}
	virtual	int Add(int nAdd1,int nAdd2);
	virtual	int Sub(int nSub1,int nSub2);
	virtual LONG	AddRef();
	virtual LONG	Release();
	LONG	m_nRef;
};
int CIMath1::Add(int nAdd1,int nAdd2){
	return nAdd1+nAdd2+100;
}
int CIMath1::Sub(int nSub1,int nSub2){
	return nSub1-nSub2-100;
}
LONG	CIMath1::AddRef(){
	InterlockedIncrement(&m_nRef);
	return m_nRef;
}
LONG	CIMath1::Release(){
	InterlockedDecrement(&m_nRef);
	if(m_nRef<=0){
		delete this;
	}
	return m_nRef;
}

IMath* CreateInstance(){
	return new CIMath;
}

BOOL APIENTRY DllMain( HANDLE hModule, 
                       DWORD  ul_reason_for_call, 
                       LPVOID lpReserved
					 )
{
    return TRUE;
}

