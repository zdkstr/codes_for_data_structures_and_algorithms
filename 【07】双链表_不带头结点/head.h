#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;
typedef struct DNode {
	ElemType data;
	struct DNode* prior, * next;
}DNode,*DLinkList;

void InitList(DLinkList& L);
DLinkList CreateList_HeadInsert(DLinkList &L);
DLinkList CreateList_TailInsert(DLinkList &L);
void PrintList(DLinkList L);
bool InsertNextDNode(DNode* p, DNode* s);
bool DeleteNextDNode(DNode* p);
int Length(DLinkList L);
bool IsEmpty(DLinkList L);
bool ListInsert(DLinkList &L,int i,ElemType e);
bool InsertPriorNode(DNode* p, ElemType e);
bool InsertNextNode(DNode* p, ElemType e);
bool ListDelete(DLinkList &L, int i, ElemType& e);
bool DeleteNode(DNode* p);
DNode* GetElem(DLinkList L, int i);
DNode* LocateElem(DLinkList L, ElemType e);
bool ListChange(DLinkList L, int i, ElemType e);
void DestroyList(DLinkList &L);
