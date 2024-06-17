#include"head.h"
//S=O(1);平均T=O(n^2);最坏T=（n^2）;稳定;只适用顺序表
void SqListInsertSort_BinarySearch(int a[], int n) {
	for (int i = 1;i < n;i++) {          //a[0]作为已排序列,a[1]~a[n-1]依次插入序列
		int low = 0;
		int high = i - 1;
		int temp = a[i];
		while (low <= high) {            //在已排序列中进行折半查找，结果的a[high]<=a[i];
			int mid = (low + high) / 2;
			if (temp < a[mid])
				high = mid - 1;
			else
				low = mid + 1;
		}								//结果的下标low可能出界，若出界，low=i;若不出界，a[low]>a[i];
		for (int j = i - 1;j >= low;j--)
			a[j + 1] = a[j];
		a[low] = temp;
	}
}

//折半查找
int Search(int a[], int n, int e) {
	int low = 0;int high = n - 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (a[mid] == e)
			return mid;
		else if (e < a[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}
