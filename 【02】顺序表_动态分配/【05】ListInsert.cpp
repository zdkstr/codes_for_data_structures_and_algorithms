#include"head.h"
bool ListInsert(SeqList& L, ElemType e) {
	if (L.length >= L.MaxSize)
		return false;
	L.data[L.length] = e;
	L.length++;
	return true;
}