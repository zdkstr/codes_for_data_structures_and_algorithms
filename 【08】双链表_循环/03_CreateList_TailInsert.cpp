#include"head.h"
DLinkList CreateList_TailInsert(DLinkList L) {
	DNode* ptail;DNode* pnew;
	ptail = L;int x;
	scanf("%d", &x);
	while (x != 9999) {
		pnew = (DLinkList)malloc(sizeof(DNode));
		pnew->data = x;
		pnew->prior = ptail;
		ptail->next = pnew;
		ptail = pnew;
		scanf("%d", &x);
	}
	ptail->next = L;
	L->prior=ptail;
	return L;
}
