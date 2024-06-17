#include"head.h"
bool GetHead(SqQueue Q, ElemType& e) {
	if (Q.rear == Q.front)
		return false;
	e = Q.data[Q.front];
	return true;
}
