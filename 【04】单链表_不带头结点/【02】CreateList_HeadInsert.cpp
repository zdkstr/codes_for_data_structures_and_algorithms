#include"head.h"
void CreateList_HeadInsert(LinkList& L) {
	LNode* pnew;
	int x;
	printf("按9999回车结束：");
	scanf("%d", &x);
	while (x != 9999) {
		pnew = (LNode*)malloc(sizeof(LNode));
		pnew->data = x;
		pnew->next = L;
		L = pnew;
		scanf("%d", &x);
	}
}
