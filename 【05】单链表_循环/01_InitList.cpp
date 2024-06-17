#include"head.h"
bool InitList(LinkList& L) {
	L = (LNode*)malloc(sizeof(LNode));
	if (L == NULL)
		return false;
	L->next = L;
	L->data=0;  // 头结点中存储线性表的长度
	return true;
}
