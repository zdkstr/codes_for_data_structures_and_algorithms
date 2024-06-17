#include"head.h"
DLinkList CreateList_TailInsert(DLinkList &L) {
	DNode* pnew;DNode* ptail=L;
	int x;
	scanf("%d", &x);
	if (x != 9999) {
		L = (DLinkList)malloc(sizeof(DNode));
		L->data = x;
		L->prior = NULL;
		L->next = NULL;
		scanf("%d", &x);
		ptail=L;
	}
	while (x != 9999) {
		pnew = (DNode*)malloc(sizeof(DNode));
		pnew->data = x;
		pnew->prior=ptail;
		pnew->next = NULL;
		ptail->next = pnew;
		ptail = pnew;
		scanf("%d", &x);
	}
	return L;
}
