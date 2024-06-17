#include"head.h"
int main() {
	int a[] = { 0,87,45,78,32,17,65,53,9,0 };  // len=9
	MaxHeapInsert(a,8,3);
	for (int i = 1;i < 10;i++)
		printf("%3d", a[i]);

	printf("\n");

	int b[] = { 13,12,11,10,9,8,7,10,4,67 };
	LinkList L;
	CreateList(L, b, 10);
	LinkListSelectSort(L);
	for (LNode* p = L->next;p != NULL;p = p->next)
		printf("%3d", p->data);
}
