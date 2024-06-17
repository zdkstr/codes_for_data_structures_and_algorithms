#include"head.h"
void CreateList(SqList& L) {
	printf("输入线性表（输入9999加回车结束）：");
	ElemType x;int i;
	scanf("%d", &x);
	for (i = 0;x != 9999;i++) {
		L.data[i] = x;
		scanf("%d", &x);
	}
	L.length = i;
}
