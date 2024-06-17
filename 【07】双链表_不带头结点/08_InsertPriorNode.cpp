#include"head.h"
bool InsertPriorNode(DNode* p, ElemType e) {
	if (p == NULL)
		return false;
	DNode* pnew = (DNode*)malloc(sizeof(DNode));
	if (pnew == NULL)
		return false;
	pnew->next = p->next;
	pnew->prior=p;
	pnew->data = p->data;
	p->next = pnew;
	p->data=e;
	pnew->next->prior=pnew;
	return true;
}
