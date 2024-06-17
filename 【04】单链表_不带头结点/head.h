#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


typedef int ElemType;
typedef struct LNode {
	ElemType data;
	struct LNode* next;
}LNode,*LinkList;

void InitList(LinkList& L);
void CreateList_HeadInsert(LinkList& L);
void CreateList_TailInsert(LinkList& L);
void PrintList(LinkList L);
int Length(LinkList L);
bool IsEmpty(LinkList L);
bool ListInsert(LinkList& L, int i, ElemType e);