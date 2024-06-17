#include"head.h"
void PrintList(DLinkList L) {
	if (L == NULL)
		printf("链表为空\n");
	else{
		DNode* p=L;
		while (p != NULL) {
			printf("%d ", p->data);
			p = p->next;
		}
		printf("\n");
	}
}
