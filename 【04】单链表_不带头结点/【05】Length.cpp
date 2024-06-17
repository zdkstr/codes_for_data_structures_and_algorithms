#include"head.h"
int Length(LinkList L) {
	LNode* p;
	p = L;
	int pos;
	for (pos = 1;p != NULL;pos++)
		p = p->next;
	return pos-1;
}