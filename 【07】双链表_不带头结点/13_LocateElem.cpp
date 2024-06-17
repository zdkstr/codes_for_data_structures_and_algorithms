#include"head.h"
DNode* LocateElem(DLinkList L, ElemType e) {
	DNode* p = L;
	while (p != NULL && p->data != e)
		p = p->next;
	return p;
}
