#include"head.h"
bool DeQueue(SqQueue& Q, ElemType& x) {
	if (Q.front == Q.rear && Q.tag == 0) // 栈空，无法出栈
		return false;
	x = Q.data[Q.front];
	Q.front = (Q.front + 1) % MaxSize;
	Q.tag = 0;
	return true;
}
