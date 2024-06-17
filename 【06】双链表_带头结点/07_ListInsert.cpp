#include"head.h"
bool ListInsert(DLinkList L,int i,ElemType e){ 
	if (i < 1)
		return false;
	DNode* pre;pre = L;
	for (int pos = 0;pre != NULL && pos != i - 1;pos++)
		pre = pre->next;
	if (pre == NULL)
		return false;
	DNode* pnew = (DNode*)malloc(sizeof(DNode));
	pnew->data = e;
	pnew->next = pre->next;
	pnew->prior=pre;
	pre->next = pnew;
	pnew->next->prior=pnew;
	return true;
}
