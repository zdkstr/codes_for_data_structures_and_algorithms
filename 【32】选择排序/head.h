#include<stdio.h>
#include<stdlib.h>

typedef int LElemType;

typedef struct LNode {
	LElemType data;
	struct LNode* next;
}LNode, * LinkList;

void SqListSelectSort(int a[], int n);
void LinkListSelectSort(LinkList L);
void CreateList(LinkList& L, int a[], int n);
void MaxHeapSort(int a[], int len);
void MinHeapSort(int a[], int len);
void MaxHeapInsert(int a[], int len, int x);
void MaxHeapDelete(int a[], int len, int pos);
