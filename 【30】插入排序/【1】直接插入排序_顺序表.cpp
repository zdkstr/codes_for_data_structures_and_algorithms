#include"head.h"
//S=O(1),最好T=O(n),平均T=O(n*n),最坏T=O(n*n),稳定;基本有序T=O(kn);
void SqListInsertSort(int a[], int n) {
	for (int i = 1;i < n;i++) {                          //a[0]视为已排序列，从第二个元素起，依次进行直接插入排序
		if (a[i] < a[i-1]) {                             //比较操作，判断是否执行移位操作
			int temp = a[i], j;                          //转存a[i],为移位操作腾空间
			for (j = i - 1;j >= 0 && a[j] > temp;--j)    //多次比较操作,判断是否越界及是否接着进行移位操作
				a[j + 1] = a[j];                         //移位操作
			a[j + 1] = temp;                             //插入操作
		}
	}
}
//最大比较次数：n(n-1)/2;最小比较次数：n-1;
//最大移位次数：n(n-1)/2;最小比较次数：0;
