#include"head.h"
int Number(SqQueue Q) {
	return (Q.rear + MaxSize - Q.front) % MaxSize;
}
