#include"head.h"
void EnQueue(LinkQueue& Q, ElemType e) {
		QNode* pnew;
		pnew = (QNode*)malloc(sizeof(QNode));
		pnew->data = e;
		pnew->next = NULL;
		Q.rear->next = pnew;
		Q.rear = pnew;
}
