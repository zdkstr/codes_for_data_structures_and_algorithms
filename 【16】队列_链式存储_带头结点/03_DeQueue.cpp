#include"head.h"
bool DeQueue(LinkQueue& Q, ElemType& e) {
	if (Q.front->next == NULL)
		return false;
	QNode* q;
	q = Q.front->next;
	e = q->data;
	Q.front->next = q->next;
	if (q == Q.rear)
		Q.rear = Q.front;
	free(q);
	return true;
}
