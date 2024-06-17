#include"head.h"
bool DeQueue(LinkQueue& Q, ElemType& e) {
	if (Q.front == NULL)
		return false;
	Node* q = Q.front;
	e = q->data;
	Q.front = Q.front->next;
	if (Q.front == NULL)
		Q.rear = NULL;
	free(q);
	return true;
}
