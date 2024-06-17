#include"head.h"
LinkList CreateList_TailInsert(LinkList& L) {
	LNode* pnew,*ptail;
	ptail = L;
	int x;
	printf("按9999回车结束:");
	scanf("%d", &x);
	while (x != 9999) {
		pnew = (LNode*)malloc(sizeof(LNode));
		pnew->data = x;
		ptail->next = pnew;
		ptail = pnew;
		scanf("%d", &x);
	}
	ptail->next = NULL;
	return L;
}
