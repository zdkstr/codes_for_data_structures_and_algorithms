#include"head.h"
void MaxHeapDelete(int a[], int len, int pos) {
	int temp = a[len];       //最后一个位置的结点保存到待删除的位置
	for (int i = 2 * pos;i <= len;i = i * 2) {   //结点下沉
		if (i < len && a[i] < a[i + 1]) i++; //通过比较，找到最大子结点位置
		if (a[i] > temp) {       //根据比较结果，决定是否与最大子结点交换位置
			a[pos] = a[i];
			pos = i;
		}
		else
			break;
	}
	a[pos] = temp;
}
