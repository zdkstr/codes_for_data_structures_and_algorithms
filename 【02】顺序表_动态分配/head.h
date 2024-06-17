#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
#define InitSize 3
typedef struct {
	ElemType* data;
	int length;
	int MaxSize;
}SeqList;
void InitList(SeqList& L);
void CreateList(SeqList& L);
void IncreaseSize(SeqList& L, int len);
void PrintList(SeqList& L);
bool ListInsert(SeqList& L, ElemType e);
bool ListDelete(SeqList& L, int i, ElemType& e);
ElemType GetElem(SeqList L, int i);
int LocateElem(SeqList L, ElemType e);
bool ListChange(SeqList& L, int i, ElemType e);
bool IsEmpty(SeqList& L);
int Length(SeqList& L);
void ClearList(SeqList& L);
