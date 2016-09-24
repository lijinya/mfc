// MFCSerial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void Store(){
	CFile file;
	if(!file.Open("c:/Serial.dat",CFile::modeCreate|CFile::modeWrite)){
		printf("文件打开失败");
		return ;
	}
	CArchive archive(&file,CArchive::store);
	archive<<100<<12.25<<"Hello CArchive";
	archive.Close();
	file.Close();
}
void Load(){
	CFile file;
	if(!file.Open("c:/Serial.dat",CFile::modeRead)){
		printf("文件读取失败!");
		return ;
	}
	CArchive ar(&file,CArchive::load);
	int num=0;
	double dou=0.0;
	CString cStr;
	ar>>num>>dou>>cStr;
	printf("%d,%lf,%s\n",num,dou,cStr);
	ar.Close();
	file.Close();
}
void CFileSerial(){
	
}

int main(int argc, char* argv[])
{
//	Store();
	Load();
	return 0;
}
