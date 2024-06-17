#include"head.h"
bool ListInsert(LinkList& L,int i, ElemType e) {
	if (i < 1)
		return false;
	LNode* pnew;
	int pos;
	LNode* p;
	p = L;
	if (i == 1) {
		pnew = (LNode*)malloc(sizeof(LNode));
		pnew->data = e;
		pnew->next = L;
		L = pnew; 
		return true;
	}
	for (pos = 1;pos < i -1 && p != NULL;pos++)
		p = p->next;
	if (p == NULL)
		return false;
	pnew = (LNode*)malloc(sizeof(LNode));
	pnew->data = e;
	pnew->next = p->next;
	p->next = pnew;
	return true;
}