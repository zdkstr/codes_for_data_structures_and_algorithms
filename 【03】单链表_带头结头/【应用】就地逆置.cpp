#include"head.h"
void Reverse(LinkList& L) {
	LNode* p = L->next;LNode* q;L->next = NULL;
	while (p != NULL) {
		q = p->next;
		p->next = L->next;
		L->next = p;
		p = q;
	}
}
LinkList Reverse2(LinkList& L) {
	if (L->next == NULL)
		return NULL;
	LNode* p = L->next, * pre = L, * pnext;
	while (p != NULL) {
		pnext = p->next;
		p->next = pre;
		pre = p;
		p = pnext;
	}
	L->next = pre;
	return L;
}//形成循环单链表
