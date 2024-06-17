#include"head.h"
//结点下坠T=O(2(h-k));
void MaxHeapAdjust(int a[], int pos, int len) {
	int temp = a[pos];
	for (int i = 2 * pos;i <= len;i = i * 2) {
		if (i < len && a[i] < a[i + 1]) i++;
		if (a[i] > temp) {
			a[pos] = a[i];
			pos = i;
		}
		else
			break;
	}
	a[pos] = temp;
}

void MaxHeapSort(int a[], int len) {
	for (int i = len / 2;i > 0;i--){  // 堆建立，T=O(n)
		MaxHeapAdjust(a, i, len);  // 每个结点都"直接"插入其对应的大根路径中
	}
	for (int i = len;i > 1;i--) {  // 堆排序，T=O(n*log_n);不稳定
		int temp = a[i];
		a[i] = a[1];
		a[1] = temp;
		MaxHeapAdjust(a, 1, i - 1);
	}
}
