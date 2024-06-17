#include"head.h"
LNode* LocateElem(LinkList L, ElemType e) {
	LNode* p = L->next;
	while (p != L && p->data != e)
		p = p->next;
	if(p==L) return NULL;
	else return p;
}
