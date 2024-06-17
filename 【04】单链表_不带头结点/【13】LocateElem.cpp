#include"head.h"
LNode* LocateElem(LinkList L, ElemType e) {
	LNode* p = L;
	int pos = 1;
	while (p != NULL&&p->data!=e) {
		p = p->next;
		pos++;
	}
	return p;
}