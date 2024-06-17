#include"head.h"
bool Pop(SqStack& S, ElemType& x) {
	if (S.top == -1)
		return false;
	x = S.data[S.top--];
	return true;
}