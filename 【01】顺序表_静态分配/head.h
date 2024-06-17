//#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h>
#define MaxSize 50
typedef int ElemType;
typedef struct {            
	ElemType data[MaxSize];
	int length;
}SqList;


void InitList(SqList& L);
void CreateList(SqList& L);
void PrintList(SqList& L);
bool IsEmpty(SqList &L);
int Length(SqList& L);
void ClearList(SqList& L);
bool ListInsert(SqList& L, int i, ElemType e);
bool ListDelete(SqList& L, int i, ElemType& e);
int LocateElem(SqList L, ElemType e);
ElemType GetElem(SqList L, int i);
bool ListChange(SqList& L, int i, ElemType e);

