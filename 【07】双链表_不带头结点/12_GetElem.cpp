#include"head.h"
DNode* GetElem(DLinkList L, int i) {
	if (i < 1)
		return NULL;
	DNode* p=L;
	for (int pos = 1;pos < i && p != NULL;pos++)
		p = p->next;
	return p;
}
