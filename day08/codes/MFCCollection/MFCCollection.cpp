// MFCCollection.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <afxtempl.h>

class CPoint3D{
public:
	int m_x;
	int m_y;
	int m_z;
	CPoint3D(){}
	CPoint3D(int x,int y,int z){
		m_x=x;
		m_y=y;
		m_z=z;
	}
public:
	operator==(const CPoint3D pt)const {
		return (m_x==pt.m_x)&&(m_y==pt.m_y)&&(m_z==pt.m_z);
	}
};
void CArrayTest(){
	CArray<CPoint3D,CPoint3D> ptArray;
	//set size
	ptArray.SetSize(100);
	//set element value
	for(int i=0;i<100;++i){
		ptArray.SetAt(i,CPoint3D(i,i,i));
	}
	ptArray.SetAtGrow(i,CPoint3D(i,i,i));
	ptArray.Add(CPoint3D(102,102,102));
	ptArray.InsertAt(0,CPoint3D(-2,-2,-2));
	ptArray.RemoveAt(0,5);
	ptArray.SetSize(10);
	ptArray.FreeExtra();	//free the extra memory
	int nSize=ptArray.GetSize();
	printf("size=%d\n",nSize);
	for(i=0;i<nSize;++i){
		printf("x=%d,y=%d,z=%d\n",
			ptArray[i].m_x,ptArray[i].m_y,ptArray[i].m_z);
	}
}
void CListTest(){
	CList<CPoint3D,CPoint3D>ptList;
	for(int i=0;i<10;++i){
		ptList.AddTail(CPoint3D(i,i,i));
	}
	ptList.SetAt(ptList.FindIndex(5),CPoint3D(66,66,66));
	ptList.RemoveAt(ptList.FindIndex(6));

	int nCount=ptList.GetCount();
	printf("count=%d\n",nCount);
/*	POSITION pos=ptList.GetHeadPosition();
	while(pos){
		CPoint3D pt=ptList.GetNext(pos);
			printf("x=%d,y=%d,z=%d\n",
			pt.m_x,pt.m_y,pt.m_z);
	}
	*/
	POSITION pos=ptList.GetTailPosition();
	while(pos){
		CPoint3D pt=ptList.GetPrev(pos);
			printf("x=%d,y=%d,z=%d\n",
			pt.m_x,pt.m_y,pt.m_z);
	}
	pos=ptList.Find(CPoint3D(4,4,4));
	if(pos){
		printf("CPoint(4,4,4) exist!\n");
	}
}
void CMapTest(){
	CMap<int,int,CPoint3D,CPoint3D> ptMap;
	ptMap.InitHashTable(121); //nSize=nCount*1.2+1; even-->odd
	int key=0;
	for(int i=0;i<100;++i){
		key=i*2+1;
		ptMap[key]=CPoint3D(i,i,i);
	}
	ptMap.SetAt(15,CPoint3D(77,77,77));
	ptMap[15]=CPoint3D(777,777,777);
	ptMap.RemoveKey(15);	//remove key--value
	int nCount=ptMap.GetCount();
	POSITION pos=ptMap.GetStartPosition();
	printf("count=%d\n",nCount);
	key=0;
	CPoint3D pt;
	while(pos){
		ptMap.GetNextAssoc(pos,key,pt);
		printf("ptMap[%d]=CPoint3D(%d,%d,%d)\n",
			key,pt.m_x,pt.m_y,pt.m_z);
	}
	if(ptMap.Lookup(175,pt)){
		printf("the element exist!\n");
		printf("ptMap[%d]=CPoint3D(%d,%d,%d)\n",
			175,pt.m_x,pt.m_y,pt.m_z);
	}
}
int main(int argc, char* argv[])
{
//	CArrayTest();
//	CListTest();
	CMapTest();
	return 0;
}

