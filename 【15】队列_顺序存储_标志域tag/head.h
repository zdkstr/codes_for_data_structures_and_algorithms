#include<stdio.h>
#include<stdlib.h>

#define MaxSize 10
typedef int ElemType;
typedef struct {
	ElemType data[MaxSize];
	int front;
	int rear;
	int tag;
}SqQueue;

void InitQueue(SqQueue& Q);
bool EnQueue(SqQueue& Q, ElemType x);
bool DeQueue(SqQueue& Q, ElemType& x);
