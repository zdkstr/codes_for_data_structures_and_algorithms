#include"head.h"
bool QueueFull(SqQueue Q) {
	return((Q.rear + 1) % MaxSize == Q.front);
}
