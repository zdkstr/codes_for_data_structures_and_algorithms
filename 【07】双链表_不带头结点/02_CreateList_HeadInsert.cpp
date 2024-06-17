#include"head.h"
DLinkList CreateList_HeadInsert(DLinkList &L) {
	DNode* pnew;int x;
	scanf("%d", &x); 
	while (x != 9999) {
		pnew = (DNode*)malloc(sizeof(DNode));
		pnew->data = x;
		pnew->next = L;
		pnew->prior = NULL;
		if (L!= NULL)
			L->prior = pnew;
		L = pnew;
		scanf("%d", &x);
	}
	return L;
}
