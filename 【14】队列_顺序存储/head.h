#include<stdio.h>
#include<stdlib.h>

#define MaxSize 10
typedef int ElemType;
typedef struct {
	ElemType data[MaxSize];
	int front;
	int rear;
}SqQueue;

void InitQueue(SqQueue& Q);
bool EnQueue(SqQueue& Q, ElemType e);
bool DeQueue(SqQueue& Q, ElemType& e);
bool QueueEmpty(SqQueue Q);
bool QueueFull(SqQueue Q);
bool GetHead(SqQueue Q, ElemType& e);
int Number(SqQueue Q);
