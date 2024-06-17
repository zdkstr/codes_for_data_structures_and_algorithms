#include"head.h"
int main()
{
	LinkList L;
	InitList(L);
	//CreateList_HeadInsert(L);
	CreateList_TailInsert(L);
	PrintList(L);
	LNode *p=GetElem(L,2);
	DeleteNode(L,p);
	PrintList(L);
	int tag=IsEmpty(L);printf("%d\n",tag);
	int data=Length(L);printf("%d\n",data);
	
}
