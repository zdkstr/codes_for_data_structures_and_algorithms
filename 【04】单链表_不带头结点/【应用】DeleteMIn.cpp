#include"head.h"
void DelMin(LinkList& L) {
	if (L == NULL)
		return;
	if (L->next == NULL) {
		LNode* q = L;
		L = NULL;
		free(q);
	}
	LNode* p, * pre, * premin, * pmin;
	pre = L;p = L->next;premin = L;pmin = L->next;
	while (p != NULL) {
		if (p->data < pmin->data) {
			pmin = p;
			premin = pre;
		}
		pre = p;
		p = p->next;
	}
	premin->next = pmin->next;
	free(pmin);
}
