#include"head.h"

void DestroyList(DLinkList &L) {
	DNode* p=L;
	while(p!=NULL){
		L=p->next;
		free(p);
		p=L;
	}
}

void DestroyList__(DLinkList &L) {
	while(L!=NULL){
		DestroyList__(L->next);
		free(L); // 只释放指针所指向的堆空间，不重置指针为NULL
		L=NULL;
	}
}
