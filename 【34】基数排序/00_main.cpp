#include"head.h"

// 链式最低位优先基数排序，实现从小到大排序
int main() {
	LinkList L=CreateList();
	
	printf("进行基数排序...");
	RadixSort(L);
	
	PrintList(L);
	
}
