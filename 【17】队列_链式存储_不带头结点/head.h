#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;
typedef struct Node {
	ElemType data;
	struct Node* next;
}Node;

typedef struct {
	Node* front;
	Node* rear;
}LinkQueue;

void InitQueue(LinkQueue& Q);
void EnQueue(LinkQueue& Q, ElemType e);
bool DeQueue(LinkQueue& Q, ElemType& e);

