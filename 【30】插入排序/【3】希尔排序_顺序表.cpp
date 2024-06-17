#include"head.h"
//S=O(1);平均T=O(未知,可能n^1.3);最坏T=O(n*n);不稳定;只适用顺序表；
void SqListShellSort(int a[], int n) {
	for (int d = n / 2;d >= 1;d = d / 2) { //步长由大到小，子表长度由小到大，数量由多到少
		for (int i = d;i < n;i++) {  //并行对各个子表进行直接插入排序
			int temp = a[i];int j;  
			if (temp < a[i - d]) {
				for (j = i - d;j >= 0 && a[j] > temp;j = j - d)
					a[j + d] = a[j];
				a[j + d] = temp;
			}
		}
	}
}
