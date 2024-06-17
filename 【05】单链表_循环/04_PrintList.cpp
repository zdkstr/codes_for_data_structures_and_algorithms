#include"head.h"
void PrintList(LinkList L) {
	LNode* p;
	p = L->next;
	while (p != L) {
		printf(" %d ", p->data);
		p = p->next;
	}
	printf("\n");
}
