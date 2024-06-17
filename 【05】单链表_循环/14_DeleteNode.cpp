#include"head.h"
bool DeleteNode(LinkList &L,LNode* pToDel) { 
	if (pToDel == NULL||pToDel==L)
		return false;
	if (pToDel->next != L) {
		LNode* p;
		p = pToDel->next;
		pToDel->next = p->next;
		pToDel->data = p->data;
		L->data-=1;
		free(p);
	}
	else{
		pToDel->next=L->next;
		pToDel->data=L->data;
		pToDel->data-=1;
		free(L);
		L=pToDel;
	}
	return true;
}
