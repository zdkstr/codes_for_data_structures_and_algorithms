#include"head.h"
int main() {
	SqQueue Q;
	InitQueue(Q);
	EnQueue(Q, 1);
	EnQueue(Q, 2);
	EnQueue(Q, 3);
	EnQueue(Q, 4);
	int x;
	DeQueue(Q, x);
	printf("%2d", x);
	GetHead(Q, x);
	printf("%2d", x);
	x=Number(Q);
	printf("%2d", x);
}
