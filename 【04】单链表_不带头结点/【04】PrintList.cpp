#include"head.h"
void PrintList(LinkList L) {
	LNode* p = L;
	while (p != NULL) {
		printf(" %d ", p->data);
		p = p->next;
	}
		
}
