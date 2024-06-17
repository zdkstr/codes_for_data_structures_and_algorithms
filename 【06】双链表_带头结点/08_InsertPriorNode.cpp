#include"head.h"
bool InsertPriorNode(DNode* p, ElemType e) {
	if (p == NULL||p->prior==NULL)
		return false;
	DNode* pre=p->prior;
	DNode* pnew = (DNode*)malloc(sizeof(DNode));
	if (pnew == NULL)
		return false;
	pnew->next = pre->next;
	pnew->prior=pre;
	pnew->data = e;
	pre->next = pnew;
	p->prior=pnew;
	return true;
}
