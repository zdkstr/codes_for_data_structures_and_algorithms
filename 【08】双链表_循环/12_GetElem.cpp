#include"head.h"
DNode* GetElem(DLinkList L, int i) {
	if (i < 1)
		return NULL;
	DNode* p=L->next;
	for (int pos = 1;pos < i && p != L;pos++)
		p = p->next;
	if (p == L)
		return NULL;
	return p;
}
