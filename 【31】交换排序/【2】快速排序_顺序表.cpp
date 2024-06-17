#include"head.h"

int Partition(int a[], int low, int high) {//一趟划分
	int pivot = a[low]; 
	while (low < high) {
		while (low < high && a[high] >= pivot) high--;
		a[low] = a[high];
		while (low < high && a[low] <= pivot) low++;
		a[high] = a[low];
	}
	a[low] = pivot;
	return low; 
}
//最好S=O(log2_⁡n)，最坏S=O(n);最好T=O(n*log2_n);实际平均T=O(n*log2_n);最坏T=O(n^2);不稳定
void SqListQuickSort(int a[], int low, int high) {
	if (low < high) {
		int pivotpos = Partition(a, low, high);
		SqListQuickSort(a, low, pivotpos - 1);
		SqListQuickSort(a, pivotpos + 1, high);
	}
}

