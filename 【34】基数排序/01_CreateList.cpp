#include"head.h"
LinkList CreateList(){
	printf("请输入数列(999回车结束)：");
	LinkList L=(LinkList)malloc(sizeof(LNode));
	LNode* ptail=L;
	LNode* pnew;
	int x;
	scanf("%d", &x);
	while (x != 999) {
		pnew = (LNode*)malloc(sizeof(LNode));
		pnew->data = x;
		ptail->next = pnew;
		ptail = pnew;
		scanf("%d", &x);
	}
	ptail->next = NULL;
	return L;
}
