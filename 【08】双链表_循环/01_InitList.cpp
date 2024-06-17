#include"head.h"
bool InitList(DLinkList& L) {
	L = (DNode*)malloc(sizeof(DNode));
	if (L == NULL)
		return false;
	L->next =L ;
	L->prior = L;
	L->data=9999;
	return true;
}
