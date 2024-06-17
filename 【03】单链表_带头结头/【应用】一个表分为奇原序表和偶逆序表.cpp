#include"head.h"
LinkList DistCreat(LinkList& LA) {
	LinkList LB = (LinkList)malloc(sizeof(LNode));
	LB->next = NULL;
	LNode* pAtail = LA;
	LNode* p=LA->next,*pnext;
	while (p != NULL) {
		pAtail->next = p;
		pAtail = p;
		p = p->next;
		if(p!=NULL) {
			pnext = p->next;
			p->next = LB->next;
			LB->next = p;
			p = pnext;
		}
	}
	pAtail->next = NULL;
	return LB;
}