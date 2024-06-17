#include"head.h"
void ReDelX(LinkList& L,ElemType x) {
	if (L == NULL)
		return;
	if (L->data == x) {
		LNode* q = L;
		L = L->next;
		free(q);
		ReDelX(L, x);
	}
	else
		ReDelX(L->next, x);
}
