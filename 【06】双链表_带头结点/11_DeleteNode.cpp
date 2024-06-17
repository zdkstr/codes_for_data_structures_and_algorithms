#include"head.h"
bool DeleteNode(DNode* p) {
	if (p == NULL||p->prior==NULL)
		return false;
	DNode *pre=p->prior;
	DNode *pne=p->next;
	pre->next=pne;
	if(pne!=NULL)
		pne->prior=pre;
	free(p);
	return true;
}
