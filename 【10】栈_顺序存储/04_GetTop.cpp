#include"head.h"
bool GetTop(SqStack &S, ElemType& e) {
	if (S.top == -1)
		return false;
	e = S.data[S.top];
	return true;
}
