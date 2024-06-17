#include"head.h"
LNode* LocateElem(LinkList L, ElemType e) {
	LNode* p = L->next;
	while (p != NULL && p->data != e)
		p = p->next;
	return p;
}
