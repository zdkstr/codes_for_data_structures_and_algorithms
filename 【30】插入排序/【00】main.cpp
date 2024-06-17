#include"head.h"
int main() {
	int a[]={13,12,11,10,9,8,7,10,4,67};
	SqListInsertSort(a, 10);
	for (int i = 0;i < 10;i++) 
		printf("%3d", a[i]);

	printf("\n");

	int b[] = { 13,12,11,10,9,8,7,10,4,67 };
	LinkList L; CreateList(L, b, 10);
	LinkListInsertSort(L);
	for (LNode *p=L->next;p!=NULL;p=p->next) 
		printf("%3d", p->data);
}
