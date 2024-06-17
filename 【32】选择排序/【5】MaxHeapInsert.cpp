#include"head.h"
void MaxHeapInsert(int a[], int len, int e) {
	int pos=len+1;//将元素插入到最后一个位置
	for (int i = pos;i > 1;i = i / 2) { //结点向上浮动
		if (a[i / 2]<e) {         //根据比较结果，决定是否与父结点交换位置
			a[pos] = a[i / 2];
			pos = i / 2;
		}
		else
			break;
	}
	a[pos] = e;
}
