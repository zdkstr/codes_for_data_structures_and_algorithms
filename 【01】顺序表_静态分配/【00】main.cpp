#include"head.h"
int main() {
	SqList L;
	InitList(L);
	CreateList(L);
	PrintList(L);
	ClearList(L);
	bool tag=IsEmpty(L);
	printf("%d",tag);
	return 0; 
}
