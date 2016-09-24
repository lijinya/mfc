// MFCFile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

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
		printf("%s\n",szText);
	}catch(CFileException e){

	}
	file.Close();
}
int main(int argc, char* argv[])
{
	CFileTest();
	return 0;
}
