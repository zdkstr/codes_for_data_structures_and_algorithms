#include"head.h"
void PrintList(DLinkList L) {
	if (L == NULL)
		printf("链表不存在\n");
	else if(L->next==L)
		printf("链表为空\n");
	else{
		DNode* p=L->next;
		while (p != L) {
			printf("%d  ", p->data);
			p = p->next;
		}
		printf("\n");
	}
}
