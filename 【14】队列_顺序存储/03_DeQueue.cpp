#include"head.h"
bool DeQueue(SqQueue& Q, ElemType& e) {
	if (Q.rear == Q.front)
		return false;
	e = Q.data[Q.front];
	Q.front = (Q.front + 1) % MaxSize;
	return true;
}