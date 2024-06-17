#include"head.h"
int main() {
	int a[] = { 0,87,45,78,32,17,65,53,9};
	SqListTwoWayMargeSort(a, 1, 8);
	for (int i = 1;i < 9;i++)
		printf("%3d", a[i]);
	printf("\n");
}