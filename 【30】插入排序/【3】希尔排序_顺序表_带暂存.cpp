#include"head.h"
//S=O(1);平均T=O(未知,可能n^1.3);最坏T=O(n*n);不稳定;只适用顺序表
void SqListShellSort_a0(int a[], int n) {    //a[0]~a[n],共n+1个，a[0]为暂存单元
	for (int d = n / 2;d >= 1;d = d / 2) {
		for (int i = 1 + d;i <= n;i++) {
			if (a[i] < a[i - d]) {
				a[0] = a[i];
				int j;
				for (j = i - d;j > 0 && a[j] > a[0];j = j - d)
					a[j + d] = a[j];
				a[j + d] = a[0];
			}
		}
	}
}
