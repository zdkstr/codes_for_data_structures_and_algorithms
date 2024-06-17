#include"head.h"
//S=O(1);平均T=O(n^2);最坏T=O(n^2);稳定;
void SqListBubbleSort(int a[], int n) {
	int temp;
	for (int i = 0;i < n - 1;i++) {
		bool flag = false;
		for (int j = n - 1;j > i;j--) {
			if (a[j] < a[j - 1]) {
				temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
				flag = true;
			}
		}
		if (flag == false)//未发生交换，结束排序
			return;
	}
}

