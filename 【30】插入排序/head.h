#include<stdio.h>
#include<stdlib.h>

typedef int LElemType;
typedef struct LNode{
	LElemType data;
	struct LNode* next;
}LNode,*LinkList;

void CreateList(LinkList& L, int a[], int n);
void LinkListInsertSort(LinkList L);
void SqListInsertSort(int a[], int n);
void SqListInsertSort_Sentry(int a[], int n);
void SqListInsertSort_BinarySearch(int a[], int n);
void SqListInsertSort_BinarySearch_Sentry(int a[], int n);
void SqListShellSort(int a[], int n);
void SqListShellSort_a0(int a[], int n);
