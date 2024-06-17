#include"head.h"
bool ListChange(SqList& L, int i, ElemType e) {
	if (i<1 || i>L.length)
		return false;
	if (L.length == 0)
		return false;
	L.data[i - 1] = e;
	return true;
}