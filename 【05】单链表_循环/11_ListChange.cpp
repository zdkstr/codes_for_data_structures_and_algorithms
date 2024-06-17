#include"head.h"
bool ListChange(LinkList& L, int i, ElemType e) {
	if (i < 1)
		return false;
	LNode* p = L->next;
	for (int pos = 1;p!=L && pos < i;pos++)
		p = p->next;
	if (p == L)
		return false;
	p->data = e;
	return true;
}
