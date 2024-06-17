#include"head.h"
void CreateList(LinkList& L, int a[],int n) {
	L = (LNode*)malloc(sizeof(LNode));
	L->next = NULL;
	LNode* pnew, * p = L;
	for (int i = 0;i < n;i++) {
		pnew = (LNode*)malloc(sizeof(LNode));
		pnew->data = a[i];
		p->next = pnew;
		p = p->next;
	}
	p->next = NULL;
}