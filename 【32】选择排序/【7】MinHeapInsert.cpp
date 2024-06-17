#include"head.h"
void MinHeapInsert(int a[], int len, int x) {
	int k=len+1;
	for (int i = k;i > 1;i = i / 2) {
		if (a[i/2]>x) {
			a[i] = a[i / 2];
			k = i / 2;
		}
		else
			break;
	}
	a[k] = x;
}