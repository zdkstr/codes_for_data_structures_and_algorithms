#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct LNode {
	ElemType data;
	struct LNode* next;
}LNode, * LinkList;

bool InitList(LinkList& L);
LinkList CreateList_HeadInsert(LinkList& L);
LinkList CreateList_TailInsert(LinkList& L);
void PrintList(LinkList L);
int IsEmpty(LinkList L);
int Length(LinkList L);
bool ListInsert(LinkList &L,int i,ElemType e);
bool ListDelete(LinkList &L,int i,ElemType &e);
LNode* GetElem(LinkList L, int i) ;
LNode* LocateElem(LinkList L, ElemType e);
bool ListChange(LinkList& L, int i, ElemType e);
bool InsertNextNode(LinkList &L,LNode* p, ElemType e);
bool InsertPriorNode(LinkList &L,LNode* p, ElemType e);
bool DeleteNode(LinkList &L,LNode* pToDel);
