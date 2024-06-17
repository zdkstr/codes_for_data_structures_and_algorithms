#include"head.h"
int main() {
	LinkQueue Q;
	InitQueue(Q);
	EnQueue(Q, 1);
	EnQueue(Q, 2);
	int x;
	DeQueue(Q, x);
	printf("%d", x);
}
