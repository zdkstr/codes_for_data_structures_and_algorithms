#include"head.h"
int main() {
	SeqList L;
	InitList(L);
	CreateList(L);
	PrintList(L);
	IncreaseSize(L, 5);
	ListInsert(L,8); 
	PrintList(L);
	ElemType e;
	ListDelete(L, 4, e);
	PrintList(L);
	system("pause");
	return 0;
}
