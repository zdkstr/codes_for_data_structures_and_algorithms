#include"head.h"
LinkList CreateList_HeadInsert(LinkList& L) {
	int x;
	LNode* pnew;
	printf("按9999回车结束:");
	scanf("%d", &x);
	while(x != 9999) {
		pnew = (LNode*)malloc(sizeof(LNode));
		pnew->data = x;
		pnew->next = L->next;
		L->next = pnew;
		scanf("%d", &x);
	}
	return L;
}
