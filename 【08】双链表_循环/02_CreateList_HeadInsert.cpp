#include"head.h"
DLinkList CreateList_HeadInsert(DLinkList L) {
	DNode* pnew;int x;
	scanf("%d", &x);
	while (x != 9999) {
		pnew = (DNode*)malloc(sizeof(DNode));
		pnew->data = x;
		pnew->next = L->next;
		pnew->prior = L;
		pnew->next->prior = pnew;
		L->next = pnew;
		scanf("%d", &x);
	}
	return L;
}
