#include"head.h"
//S=O(1);平均T=O(n*n);最坏T=（n*n）;稳定;只适用顺序表
void SqListInsertSort_BinarySearch_Sentry(int a[], int n) {
	for (int i = 2;i <= n;i++) {              //依次序处理元素
		a[0] = a[i];
		int low = 1,high=i-1;
		while (low <= high) {                 //对已排序列进行折半查找
			int mid = (low + high) / 2;
			if (a[0]<a[mid])
				high = mid - 1;
			else
				low = mid + 1;
		}
		for (int j = i - 1;j >= high + 1;--j)
			a[j + 1] = a[j];
		a[high + 1] = a[0];
	}
}
