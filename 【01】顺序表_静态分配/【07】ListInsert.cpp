#include"head.h"
bool ListInsert(SqList& L, int i, ElemType e) {
	if (i<1 || i>L.length + 1)
		return false;
	if (L.length >= MaxSize)
		return false;
	for (int j = L.length;j > i - 1;j--)
		L.data[j] = L.data[j - 1];
	L.data[i - 1] = e;
	L.length = L.length + 1;
	return true;
}
