// MFCCFile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MFCCFile.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// The one and only application object

//CWinApp theApp;

using namespace std;
#include "stdafx.h"
#include <afx.h>
void CFileTest(){
	CFile file;
	if(!file.Open("c:/mfcfile.txt",
		CFile::modeCreate|CFile::modeReadWrite)){
		printf("open failed!\n");
		return ;
	}
	try{
		file.Write("Hello CFile",11);
		char szText[256]={0};
		file.SeekToBegin();
		file.Read(szText,256);
		cout<<szText<<endl;
	}catch(CFileException e){
		
	}
	file.Close();
}
void CFileStatusTest(){
	CFileStatus status;
	CFile::GetStatus("C:/mfcfile.txt",status);
	CTimeSpan span(1,0,0,0);
	status.m_ctime-=span;
	CFile::SetStatus("C:/mfcfile.txt",status);
}
int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
//	CFileTest();
	CFileStatusTest();
	return 0;
}


