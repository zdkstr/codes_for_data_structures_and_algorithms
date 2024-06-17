#include"head.h"
bool DeleteNode(LNode* pToDel) { 
	if (pToDel == NULL)
		return false;
	if (pToDel->next != NULL) {
		LNode* p;
		p = pToDel->next;
		pToDel->next = p->next;
		pToDel->data = p->data;
		free(p);
		return true;
	}
	else
		return false;
}
