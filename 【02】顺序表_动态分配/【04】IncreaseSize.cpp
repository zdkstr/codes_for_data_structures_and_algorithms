#include"head.h"
void IncreaseSize(SeqList& L, int len) {
	ElemType* p = L.data;
	L.data = (ElemType*)malloc(sizeof(ElemType) * (L.MaxSize + len));
	for (int i = 0;i < L.length;i++) {
		L.data[i] = p[i];
	}
	L.MaxSize = L.MaxSize + len;
	free(p);
}