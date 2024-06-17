#include"head.h"
DNode* LocateElem(DLinkList L, ElemType e) {
	DNode* p = L->next;
	while (p != L && p->data != e)
		p = p->next;
	if(p==L)
		return NULL;
	return p;
}
