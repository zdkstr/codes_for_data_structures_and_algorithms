#include"head.h"
LNode* GetElem(LinkList L, int i) {
	if (i < 0)
		return NULL;
	LNode* p=L->next;
	for (int pos = 1;pos < i && p!= L;pos++)
		p = p->next;
	if (p == L)
		return NULL;
	return p;
}
