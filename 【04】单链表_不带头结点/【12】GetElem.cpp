#include"head.h"
LNode* GetElem(LinkList L, int i) {
	if (i < 1)
		return NULL;
	LNode* p = L;
	for (int pos = 1;pos !=i && p != NULL;pos++)
		p = p->next;
	return p;
}