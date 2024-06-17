#include<stdio.h>
#include<stdlib.h>

typedef int LElemType;
typedef struct LNode {
	LElemType data;
	struct LNode* next;
}LNode, * LinkList;

void CreateList(LinkList& L, int a[], int n);
void SqListBubbleSort(int a[], int n);
void LinkListBubbleSort(LinkList L);
void SqListQuickSort(int a[], int low, int high);
void Qsort(int A[], int L, int R);