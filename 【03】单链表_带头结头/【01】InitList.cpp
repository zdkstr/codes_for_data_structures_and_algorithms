#include"head.h"
bool InitList(LinkList& L) {
	L = (LinkList)malloc(sizeof(LNode));
	if (L == NULL)
		return false;
	L->next = NULL;
	return true;
}
