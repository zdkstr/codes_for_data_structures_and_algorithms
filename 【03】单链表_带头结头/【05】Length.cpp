#include"head.h"
int Length(LinkList L) {
	LNode* p;
	p = L->next;
	int len;
	for (len = 0;p != NULL;len++) {
		p = p->next;
	}
	return len;
}