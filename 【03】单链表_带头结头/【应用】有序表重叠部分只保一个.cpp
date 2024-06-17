#include"head.h"
void DelSame(LinkList& L) {
	LNode* p = L->next;
	while (p != NULL) {
		LNode* q = p->next;
		while (q != NULL&& p->data == q->data) {
			p->next = q->next;
			free(q);
			q = p->next;
		}
		p = p->next;
	}
}