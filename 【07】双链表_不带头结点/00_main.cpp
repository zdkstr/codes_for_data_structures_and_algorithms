#include"head.h"
int main()
{
	DLinkList L;
	InitList(L);
	CreateList_TailInsert(L);
	PrintList(L);
	ElemType k=Length(L);
	printf("%d\n",k);
	bool tag=IsEmpty(L);
	printf("%d\n",tag);
	ListInsert(L,3,666);
	PrintList(L);
	ElemType e;
	ListDelete(L,3,e);
	PrintList(L);
	system("pause");
	return 0;
}
