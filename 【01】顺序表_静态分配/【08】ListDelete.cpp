#include"head.h"
bool ListDelete(SqList& L, int i, ElemType& e) {
	if (i<1 || i>L.length) 
		return false;
	if (L.length == 0)
		return false;
	e = L.data[i - 1];
	for (int j = i - 1;j < L.length - 1;j++)
		L.data[j] = L.data[j + 1];
	L.length = L.length - 1;
	return true;
}
