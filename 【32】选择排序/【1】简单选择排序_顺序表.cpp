#include"head.h"
//S=O(1);永恒T=O(n^2);算法不稳定;
void SqListSelectSort(int a[], int n) {
	for (int i = 0;i < n - 1;i++) {
		int min = i;
		for (int j = i + 1;j < n;j++)
			if (a[j] < a[min])
				min = j;
		if (min != i) {
			int temp = a[i];
			a[i] = a[min];
			a[min] = temp;
		}
	}
}
