#include"head.h"
bool ListDelete(LinkList& L, int i, ElemType& e) { 
	if (i<1 )
		return false;
	LNode* p = L;
	for (int pos = 0;pos < i - 1 && p->next != NULL;pos++)
		p = p->next;
	if (p->next == NULL)
		return false;
	LNode* q = p->next;
	p->next = q->next;
	e = q->data;
	free(q);
	return true;
}
