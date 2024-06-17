#include"head.h"
int main()
{
	DLinkList L;
	InitList(L);
	CreateList_TailInsert(L);
	PrintList(L);
	int k=Length(L);
	printf("%d\n",k);
	bool tag=IsEmpty(L);
	printf("%d\n",tag);
	bool flag=Symmetry(L);
	printf("%d\n",flag);
	system("pause");
	return 0;
}
