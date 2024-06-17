#include"head.h"
void InitList(SqList& L) {
	L.length = 0;
	for (int i = 0;i < MaxSize;i++)
		L.data[i] = 0;
}