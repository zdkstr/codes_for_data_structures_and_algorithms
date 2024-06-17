#include"head.h"

int b[20];
void TwoWayMerge(int a[], int low, int mid, int high) {
	for (int i = low;i <= high;i++) b[i] = a[i];
	int i, j,k;
	for (i = low, j = mid + 1, k = i;i <= mid && j <= high;k++)
		if (b[i] <= b[j]) a[k] = b[i++];    // 算法稳定的关键
	else              a[k] = b[j++];
	while (i <= mid) a[k++] = b[i++];
	while (j <= high) a[k++] = b[j++];
}

// S=O(n+log2_n);T=O(n*log2_n);算法稳定;耗费空间换时间
void SqListTwoWayMargeSort(int a[], int low, int high) {  // 递归方式
	if (low < high) {
		int mid = (low + high) / 2;
		SqListTwoWayMargeSort(a, low, mid);
		SqListTwoWayMargeSort(a, mid + 1, high);
		TwoWayMerge(a, low, mid, high);
	}
}
