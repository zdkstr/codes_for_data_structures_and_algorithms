#include"head.h"
bool EnQueue(SqQueue& Q, ElemType e) {
	if ((Q.rear + 1) % MaxSize == Q.front)
		return false;
	Q.data[Q.rear] = e;
	Q.rear = (Q.rear + 1) % MaxSize;
	return true;
}
