#include"head.h"
bool InsertPriorNode(LinkList &L,LNode* p, ElemType e) {
	if (p == NULL||p==L)
		return false;
	LNode* pnew = (LNode*)malloc(sizeof(LNode));
	if (pnew == NULL)
		return false;
	pnew->data = p->data;
	pnew->next = p->next;
	p->next = pnew;
	p->data = e;
	L->data+=1;
	return true;
}
