#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

typedef int ElemType;
//����һ����������--�ṹ�壬����������洢�ռ�
typedef struct LNode {
	ElemType data;
	struct LNode* next;
}LNode, * LinkList;


bool InitList(LinkList& L);
LNode* GetElem(LinkList L, int i);
bool ListInsert(LinkList& L, int i, ElemType e);
bool IsEmpty(LinkList L);
bool InsertNextNode(LNode* p, ElemType e);
bool InsertPriorNode(LNode* p, ElemType e);
bool ListDelete(LinkList& L, int i, ElemType& e);
bool DeleteNode(LNode* p);
LNode* LocateElem(LinkList L, ElemType e);
int Length(LinkList L);
LinkList CreateList_TailInsert(LinkList& L);
LinkList CreateList_HeadInsert(LinkList& L);
void PrintList(LinkList L);