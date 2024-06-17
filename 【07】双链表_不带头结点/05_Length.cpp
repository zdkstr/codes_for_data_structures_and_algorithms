#include"head.h"
int Length(DLinkList L){
	DNode *p=L;int k;
	for(k=0;p!=NULL;k++){
		p=p->next;
	}
	return k;
}
