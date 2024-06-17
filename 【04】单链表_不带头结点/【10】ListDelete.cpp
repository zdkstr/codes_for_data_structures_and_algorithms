#include"head.h"
bool ListDelete(LinkList& L, int i, ElemType& e) {
	if (i < 1)
		return false;
	if (L == NULL)
		return false;
	if (i == 1) {
		LNode* q = L;
		L = L->next;
		free(q);
		return true;
	}
	int pos;
	LNode* p;
	p = L;
	for (pos = 1;pos < i - 1 && p->next != NULL;pos++)
		p = p->next;
	if (p->next == NULL)
		return false;
	LNode* q = p->next;
	p->next = q->next;
	e = q->data;
	free(q);
	return true;
}