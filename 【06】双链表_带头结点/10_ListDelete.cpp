#include"head.h"
bool ListDelete(DLinkList L, int i, ElemType& e) { 
	if (i<1 )
		return false;
	DNode* p = L->next;
	for (int pos = 1;pos < i && p != NULL;pos++)
		p = p->next;
	if (p == NULL)
		return false;
	DNode* pre = p->prior;
	DNode* pne = p->next;
	pre->next = pne;
	if(pne!=NULL)
		pne->prior= pre;
	e = p->data;
	free(p);
	return true;
}
