#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

#define MaxSize 10
typedef int ElemType;
typedef struct {
	ElemType data;
	int next;
}SNode,SLinkList;


void InitList(SLinkList L[]);
void CreateList_HeadInsert(SLinkList L[]);
void CreateList_TailInsert(SLinkList L[]);
void PrintList(SLinkList L[]);
