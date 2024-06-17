#include"head.h"
bool ListInsert(DLinkList& L,int i, ElemType e) {
	if (i < 1)
		return false;
	DNode* pnew;
	if (i == 1) {
		pnew = (DNode*)malloc(sizeof(DNode));
		pnew->data = e;
		pnew->next = L;
		pnew->prior=NULL;
		if(L!=NULL)
			L->prior=pnew;
		L = pnew; 
		return true;
	}
	DNode* pre= L;int pos;
	for (pos = 1;pos < i -1 && pre!= NULL;pos++)
		pre = pre->next;
	if (pre == NULL)
		return false;
	pnew = (DNode*)malloc(sizeof(DNode));
	pnew->data = e;
	pnew->next = pre->next;
	pnew->prior=pre;
	pre->next = pnew;
	if(pnew->next!=NULL)
		pnew->next->prior=pnew;
	return true;
}
