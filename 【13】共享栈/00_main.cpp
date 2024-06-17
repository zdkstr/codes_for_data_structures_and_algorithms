#include"head.h"
int main() {
	SharedStack S;int x;
	InitStack(S);
	Push(S, 1, 1);
	Push(S, 1, 2);
	Push(S, 1, 3);
	Push(S, 1, 4);
	Push(S, 2, -1);
	Push(S, 2, -2);
	Push(S, 2, -3);
	Push(S, 2, -4);
	Pop(S, 1, x);
	printf("%d", x);
	Pop(S,2, x);
	printf("%d", x);
}