#include"head.h"
void Sort(LinkList& L) { 
	if (L->next == NULL) 
		return;
	LNode* p = L->next, * pre;
	LNode* r = p->next;
	p->next = NULL;
	p = r;
	while (p != NULL) {
		r = p->next;
		pre = L;
		while (pre->next != NULL && pre->next->data < p->data) 
			pre = pre->next;
		p->next = pre->next;
		pre->next = p;
		p = r;
	}
}
