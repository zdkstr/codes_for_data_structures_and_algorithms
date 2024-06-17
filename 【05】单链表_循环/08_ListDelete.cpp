#include"head.h"
bool ListDelete(LinkList &L, int i, ElemType &e) { 
	if (i<1 )
		return false;
	LNode* pre = L;
	for (int sub = 0;sub < i - 1 && pre->next != L;sub++)
		pre = pre->next;
	if (pre->next == L)
		return false;
	LNode* q = pre->next;
	pre->next = q->next;
	e = q->data;
	L->data-=1;
	free(q);
	return true;
}
