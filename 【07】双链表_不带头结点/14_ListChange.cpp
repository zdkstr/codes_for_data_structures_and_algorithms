#include"head.h"
bool ListChange(DLinkList L, int i, ElemType e) {
	if (i < 1)
		return false;
	DNode* p = L;
	for (int pos = 1;p != NULL && pos < i;pos++)
		p = p->next;
	if (p == NULL)
		return false;
	else{
		p->data = e;
		return true;
	}
}
