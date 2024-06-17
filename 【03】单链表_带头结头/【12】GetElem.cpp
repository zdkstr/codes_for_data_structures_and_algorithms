#include"head.h"
LNode* GetElem(LinkList L, int i) {
	if (i < 1)
		return NULL;
	LNode* p;
	p = L;
	for (int pos = 0;pos < i && p != NULL;pos++)
		p = p->next;
	if (p == NULL)
		return NULL;
	return p;
}
