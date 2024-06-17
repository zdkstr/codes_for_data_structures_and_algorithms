#include"head.h"
bool InitList(DLinkList& L) {
	L = (DNode*)malloc(sizeof(DNode));
	if (L == NULL)
		return false;
	L->next = NULL;
	L->prior = NULL;
	return true;
}
