#include"head.h"
int Length(DLinkList L){
	if(L==NULL)
		return -1;
	DNode *p=L->next;
	int k;
	for(k=0;p!=NULL;k++){
		p=p->next;
	}
	return k;
}
