#include"head.h"
void PrintList(LinkList L) {
	LNode* p;
	p = L->next;
	printf("打印数列：");
	while (p != NULL) {
		printf("%d ", p->data);
		p = p->next;
	}
	putchar('\n');
}
