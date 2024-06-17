#include"head.h"
void MinHeapDelete(int a[], int len, int pos) {
	int k = pos;
	for (int i = 2*pos;i <= len;i = 2 * i) {
		if (i<len && a[i] > a[i + 1]) i++;
		if (a[i] < a[len]) {
			a[pos] = a[i];
			k = i;
		}
		else
			break;
	}
	a[k] = a[len];
}