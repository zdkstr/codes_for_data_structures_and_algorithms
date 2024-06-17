#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct QNode {
	ElemType data;
	struct QNode* next;
}QNode;

typedef struct {
	QNode* front;
	QNode* rear;
}LinkQueue;

void InitQueue(LinkQueue& Q);
void EnQueue(LinkQueue& Q, ElemType e);
bool DeQueue(LinkQueue& Q, ElemType& e);