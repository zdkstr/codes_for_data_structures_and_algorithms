#include"head.h"
bool Pop(LinkStack& S, ElemType &e) {
	if (S->next == NULL)
		return false;
	SNode* q;
	q = S->next;
	S->next = q->next;
	e = q->data;
	free(q);
	return true;
}
