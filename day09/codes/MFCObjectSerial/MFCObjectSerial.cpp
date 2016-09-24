// MFCObjectSerial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class CStudent:public CObject{
	
public:
	CStudent();
	CStudent(CString m_sName,UINT m_iAge);
	virtual void Serialize(CArchive& ar);
	void Show();
public:
	CString m_sName;
	UINT m_iAge;
//DECLARE_SERIAL(CStudent)
_DECLARE_DYNCREATE(CStudent) 
AFX_API friend CArchive& AFXAPI operator>>
(CArchive& ar, CStudent* &pOb);
};
//

//
// IMPLEMENT_SERIAL(CStudent,CObject,1)
	 //
	 CObject* PASCAL CStudent::CreateObject(){ 
		 return new CStudent; 
	 } 
//	_IMPLEMENT_RUNTIMECLASS(CStudent, CObject, 1, CStudent::CreateObject) 

  AFX_DATADEF CRuntimeClass CStudent::classCStudent = { \
	  "CStudent", sizeof(class CStudent), 1, CStudent::CreateObject, \
	RUNTIME_CLASS(CObject), NULL }; \
	CRuntimeClass* CStudent::GetRuntimeClass() const \
	{ return RUNTIME_CLASS(CStudent); } \


	AFX_CLASSINIT _init_CStudent(RUNTIME_CLASS(CStudent)); 
	CArchive& AFXAPI operator>>(CArchive& ar, CStudent* &pOb){ 
		pOb = (CStudent*) ar.ReadObject(RUNTIME_CLASS(CStudent)); 
		return ar; 
	} 
	 //
CStudent::CStudent(){}
CStudent::CStudent(CString m_sName,UINT m_iAge){
	this->m_sName=m_sName;
	this->m_iAge=m_iAge;
}
void CStudent::Serialize(CArchive& ar){
	CObject::Serialize(ar);
	if(ar.IsStoring()){
		ar<<m_sName<<m_iAge;
	}else{
		ar>>m_sName>>m_iAge;
	}
}
void CStudent::Show(){
	printf("学生姓名:%s\n学生年龄:%d\n",m_sName,m_iAge);
}
//

void ObjStore(CStudent &stu){
	CFile file;
	if(!file.Open("c:/stu.dat",CFile::modeCreate|CFile::modeReadWrite)){
		printf("文件创建失败!\n");
		return;
	}
	CArchive ar(&file,CArchive::store);
	ar<<&stu;
	ar.Close();
	file.Close();
}
void ObjLoad(){
	CFile file;
	if(!file.Open("c:/stu.dat",CFile::modeRead)){
		printf("文件打开失败!\n");
		return ;
	}
	CArchive ar(&file,CArchive::load);
	CStudent *stu=NULL;
	ar>>stu;	//封装反序列化全部过程
	ar.Close();
	file.Close();
	if(stu){
		stu->Show();
	}
	
}
int main(int argc, char* argv[])
{
	CStudent stu("aaa",20);
//	ObjStore(stu);
	ObjLoad();
	return 0;
}
