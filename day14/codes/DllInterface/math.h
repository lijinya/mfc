#ifndef _MATH_H_
#define _MATH_H_

#include<objbase.h>
//#define interface struct
interface IMath{
	public:
	virtual	int Add(int nAdd1,int nAdd2)=0;
	virtual	int Sub(int nSub1,int nSub2)=0;
	virtual LONG	AddRef()=0;
	virtual LONG	Release()=0;
};

#endif	//_MATH_