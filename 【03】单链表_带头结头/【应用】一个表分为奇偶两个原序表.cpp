#include"head.h"
LinkList DisCreat(LinkList& LA) {
	LinkList LB = (LinkList)malloc(sizeof(LNode));
	LB->next = NULL;
	LNode* p = LA->next;
	LNode* pAtail = LA, * pBtail = LB;
	int i = 1;
	while (p != NULL) {
		if (i % 2 == 1) {
			pAtail->next = p;
			pAtail = p;
		}
		else {
			pBtail->next = p;
			pBtail = p;
		}
		i++;
		p = p->next;
	}
	pAtail->next = NULL;
	pBtail->next = NULL;
	return LB;
}