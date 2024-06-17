#include"head.h"

//typedef BiTNode* QElemType;
//typedef struct QNode {
//	QElemType data;
//	struct QNode* next;
//}QNode;
//typedef struct {
//	QNode* front;
//	QNode* rear;
//}LinkQueue;

//void InitQueue(LinkQueue& Q);
//void EnQueue(LinkQueue& Q, QElemType e);
//bool DeQueue(LinkQueue& Q, QElemType& e);
//bool QueueEmpty(LinkQueue Q);

void InitQueue(LinkQueue& Q) {
	Q.front = Q.rear=NULL;
}
void EnQueue(LinkQueue& Q, QElemType e) {
	QNode* pnew;
	pnew = (QNode*)malloc(sizeof(QNode));
	pnew->data = e;
	pnew->lchild_is_visited = 0;
	pnew->next = NULL;
	if (Q.rear == NULL) {
		Q.front = Q.rear = pnew;
		return;
	}
	Q.rear->next = pnew;
	Q.rear = pnew;
}
bool DeQueue(LinkQueue& Q, QElemType& e) {
	if (Q.front == NULL)
		return false;
	QNode* q = Q.front;
	e = q->data;
	Q.front = Q.front->next;
	if (Q.front == NULL) {
		Q.rear = NULL;
	}
	free(q);
	return true;
}
bool QueueEmpty(LinkQueue Q) {
	return(Q.front == NULL);
}