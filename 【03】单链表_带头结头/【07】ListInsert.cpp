#include"head.h"
bool ListInsert(LinkList& L, int i, ElemType e) { 
	if (i < 1)
		return false;
	LNode* p;p = L;int pos;
	for (pos = 0;p != NULL && pos != i - 1;pos++)
		p = p->next;
	if (p == NULL)
		return false;
	LNode* pnew = (LNode*)malloc(sizeof(LNode));
	pnew->data = e;
	pnew->next = p->next;
	p->next = pnew;
	return true;
}

