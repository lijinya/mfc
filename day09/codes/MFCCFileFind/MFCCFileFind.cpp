// MFCCFileFind.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void CFileFindTest(CString strPath,CString t){
	CFileFind find;
	BOOL bRet=find.FindFile(strPath+"/*.*");
	while(bRet){
		bRet=find.FindNextFile();
		CString strName=find.GetFileName();
		strPath=find.GetFilePath();
		if(!find.IsDots()){
			if(find.IsDirectory()){
				printf("目录:%s\n",t+strName);
				//	std::cout<<"目录:%s\n"<<strName<<endl;
				CFileFindTest(strPath,t+"****");
			}else{
				printf("文件:%s\n",t+strName);
				//	cout<<"文件:%s\n"<<strName<<endl;
			}
		}
	}
	find.Close();
}
int main(int argc, char* argv[])
{
	CFileFindTest("d:/mfc/day09","");
	return 0;
}
