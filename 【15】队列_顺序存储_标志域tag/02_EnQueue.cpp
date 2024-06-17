#include"head.h"
bool EnQueue(SqQueue& Q, ElemType x) {
	if (Q.front == Q.rear && Q.tag == 1)  // 栈满，无法入栈
		return false;
	Q.data[Q.rear] = x;
	Q.rear = (Q.rear + 1) % MaxSize;
	Q.tag = 1;
	return true;
}
