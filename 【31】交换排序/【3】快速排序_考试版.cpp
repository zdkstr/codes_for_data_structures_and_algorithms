#include"head.h"
//考试版
void Qsort(int A[], int L, int R) {          //a数组保存数据，L和R是边界
	if (L >= R) return;                     //当前区间元素个数不超过1，则退出
	//把a数组中随机一个元素与A[L]交换			//快排优化
	int key = A[L], i = L, j = R;
	while (i < j) {
		while (i < j && A[j] >= key) j--;
		A[i] = A[j];
		while (i < j && A[i] <= key) i++;
		A[j] = A[i];
	}
	A[i] = key;
	Qsort(A, L, i - 1);
	Qsort(A, i + 1, R);
}
