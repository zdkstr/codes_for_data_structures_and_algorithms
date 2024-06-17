#include"head.h"
void InitList(SeqList& L) {
	L.data = (ElemType*)malloc(sizeof(ElemType) * InitSize);
	if(L.data==NULL)
		exit(0);
	L.length = 0;
	L.MaxSize = InitSize;
}
