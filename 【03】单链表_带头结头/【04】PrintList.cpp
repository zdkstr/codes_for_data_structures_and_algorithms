#include"head.h"
void PrintList(LinkList L) {
	LNode* p;
	p = L->next;
	while (p != NULL) {
		printf(" %d ", p->data);
		p = p->next;
	}
}