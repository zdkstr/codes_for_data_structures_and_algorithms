#include"head.h"
bool InsertNextNode(DNode* p, ElemType e) {
	if (p == NULL)
		return false;
	DNode* pnew = (DNode*)malloc(sizeof(DNode));
	if (pnew == NULL)
		return false;
	pnew->data = e;
	pnew->next = p->next;
	pnew->prior=p;
	p->next = pnew;
	pnew->next->prior=pnew;
	return true;
}
