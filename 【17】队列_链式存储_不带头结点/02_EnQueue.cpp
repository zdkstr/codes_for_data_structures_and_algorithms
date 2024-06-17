#include"head.h"
void EnQueue(LinkQueue& Q,ElemType e) {
	Node* pnew;
	pnew = (Node*)malloc(sizeof(Node));
	pnew->data = e;
	pnew->next = NULL;
	if (Q.rear == NULL) 
		Q.front = Q.rear = pnew;
	else{
		Q.rear->next = pnew;
		Q.rear = pnew;
	}
}
