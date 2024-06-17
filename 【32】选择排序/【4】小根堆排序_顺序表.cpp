#include"head.h"
void MinHeapHeadAdjust(int a[], int k, int len) {
	a[0] = a[k];
	for (int i = 2 * k;i <= len;i = i * 2) {
		if (i < len && a[i] > a[i + 1]) i++;
		if (a[0] <= a[i]) break;
		else {
			a[k] = a[i];
			k = i;
		}
	}
	a[k] = a[0];
}
void BuildMinHeap(int a[], int len) {
	for (int i = len / 2;i > 0;i--)
		MinHeapHeadAdjust(a, i, len);
}
void MinHeapSort(int a[],int len) {
	BuildMinHeap(a,len);
	for (int i = len;i >1;i--) {
		int temp = a[i];
		a[i] = a[1];
		a[1] = temp;
		MinHeapHeadAdjust(a, 1, i-1);
	}
}