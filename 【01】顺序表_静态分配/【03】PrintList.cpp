#include"head.h"
void PrintList(SqList &L) {
	printf("打印顺序表：");
	for (int i = 0;i < L.length;i++)
		printf("%-6d", L.data[i]);
	printf("\n");
}
