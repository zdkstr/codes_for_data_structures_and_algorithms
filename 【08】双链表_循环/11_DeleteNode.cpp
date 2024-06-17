#include"head.h"
bool DeleteNode(DNode* p) {
	if (p == NULL||p->data==9999)
		return false;
	DNode *pre=p->prior;
	DNode *pne=p->next;
	pre->next=pne;
	pne->prior=pre;
	free(p);
	return true;
}
