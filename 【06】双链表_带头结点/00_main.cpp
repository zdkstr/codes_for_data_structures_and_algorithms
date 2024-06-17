#include"head.h"
int main()
{
	DLinkList L;
	InitList(L);
	CreateList_TailInsert(L);
	PrintList(L);
	ListInsert(L,1,88);
	PrintList(L);
	ElemType e;
	ListDelete(L,2,e);
	PrintList(L);
	DNode *p;
	p=GetElem(L,3);
	DeleteNode(p);
	PrintList(L);
	DestroyList(L);
	PrintList(L);
	system("pause");
	return 0;
}
