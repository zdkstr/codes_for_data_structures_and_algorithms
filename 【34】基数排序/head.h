#include<stdio.h>
#include<stdlib.h>
#define n_distributions 3  // 数据的位数不超过n，则只需要分配n趟
#define radix 10           // 十进制数的基数为10，月份的基数为12

typedef struct LNode{
	int data;
	struct LNode* next;
}LNode,*LinkList;

typedef struct {
	LNode* front;
	LNode* rear;
}LinkQueue;

LinkList CreateList();
void PrintList(LinkList L);
void RadixSort(LinkList &L);
