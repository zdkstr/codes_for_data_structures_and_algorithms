#include"head.h"
int main() {
	int a[] = { 13,12,11,10,9,8,7,10,4,67 };
	SqListQuickSort(a,0,9);
	for (int i = 0;i < 10;i++) 
		printf("%3d", a[i]);

	printf("\n");

	Qsort(a, 0, 9);
	for (int i = 0;i < 10;i++)
		printf("%3d", a[i]);
}