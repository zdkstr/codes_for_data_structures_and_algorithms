#include"head.h"
void PrintList(DLinkList L) {
	if (L == NULL)
		printf("链表不存在\n");
	if(L->next==NULL)
		printf("链表为空\n");
	DNode* p=L->next;
	while (p != NULL) {
		printf("%3d", p->data);
		p = p->next;
	}
	printf("\n");
}
