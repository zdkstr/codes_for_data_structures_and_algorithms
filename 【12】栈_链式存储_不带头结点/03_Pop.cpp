#include"head.h"
bool Pop(LinkStack& S, ElemType &e) {
	if (S == NULL)
		return false;
	SNode* q;
	q = S;
	S = q->next;
	e = q->data;
	free(q);
	return true;
}
