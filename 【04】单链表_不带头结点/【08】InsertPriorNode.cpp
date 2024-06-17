#include"head.h"
bool InsertPriorNode(LNode* p, ElemType e) {
	if (p == NULL)
		return false;
	LNode* pnew = (LNode*)malloc(sizeof(LNode));
	pnew->data = p->data;
	pnew->next = p->next;
	p->next = pnew;
	p->data = e;
	return true;
}