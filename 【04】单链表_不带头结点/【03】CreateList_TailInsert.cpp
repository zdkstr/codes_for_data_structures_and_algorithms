#include"head.h"
void CreateList_TailInsert(LinkList& L) {
	LNode* pnew, * ptail;
	int x;
	printf("按9999回车结束：");
	scanf("%d", &x);
	if (x != 9999) {
		L = (LinkList)malloc(sizeof(LNode));
		L->data = x;
		L->next = NULL;
		scanf("%d", &x);
	}
	ptail = L;
	while (x != 9999) {
		pnew = (LNode*)malloc(sizeof(LNode));
		pnew->data = x;
		ptail->next = pnew;
		ptail = pnew;
		scanf("%d", &x);
	}
	ptail->next = NULL;
}
