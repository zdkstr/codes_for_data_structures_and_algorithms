#include"head.h"
LinkList CreateList_TailInsert(LinkList& L) {
	LNode* pnew, * ptail;
	ptail = L;
	int x;
	printf("输入线性表，9999回车结束：");
	scanf("%d", &x);
	while (x != 9999) {
		pnew = (LNode*)malloc(sizeof(LNode));
		pnew->data = x;
		ptail->next = pnew;
		ptail = pnew;
		L->data+=1;
		scanf("%d", &x);
	}
	ptail->next = L;
	return L;
}
