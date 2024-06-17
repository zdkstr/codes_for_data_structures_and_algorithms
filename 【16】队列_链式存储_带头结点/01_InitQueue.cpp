#include"head.h"
void InitQueue(LinkQueue& Q) {
	Q.front = Q.rear = (QNode*)malloc(sizeof(QNode));
	Q.front->next = NULL;
}