#include"head.h"
int main() {
	LinkQueue Q;
	InitQueue(Q);
	EnQueue(Q, 1);
	EnQueue(Q, 2);
	EnQueue(Q, 3);
	int x;
	DeQueue(Q, x);
	printf("%d", x);
}
