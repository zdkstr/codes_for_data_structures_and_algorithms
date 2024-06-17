#include"head.h"
bool InsertNextNode(LNode* p, ElemType e) {
	if (p == NULL)
		return false;
	LNode* pnew = (LNode*)malloc(sizeof(LNode));
	if (pnew == NULL)
		return false;
	pnew->data = e;
	pnew->next = p->next;
	p->next = pnew;
	return true;
}
