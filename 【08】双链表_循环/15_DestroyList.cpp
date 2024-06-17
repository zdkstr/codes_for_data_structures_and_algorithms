#include"head.h"

void DestroyList(DLinkList &L) {
	DNode* p=L;DNode *q=L;
	while(p!=NULL){
		L=p->next;
		free(p);
		if(L==q)
			L=NULL;
		p=L;
	}
}
