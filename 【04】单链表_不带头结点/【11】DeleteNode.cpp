#include"head.h"
bool DeleteNode(LNode* p, ElemType& e) {
	if (p == NULL)
		return false;
	if (p->next == NULL)
		return false;
	e = p->data;
	LNode* q;
	q = p->next;
	p->next = q->next;
	p->data = q->data;
	free(q);
	return true;
}