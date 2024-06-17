#include"head.h"
int main() {
	LinkStack S; ElemType x;
	InitStack(S);
	Push(S, 1);
	Push(S, 2);
	Push(S, 3);
	Pop(S, x);
	printf("%3d", x);
	GetTop(S, x);
	printf("%3d", x);
	DestroyStack(S);
}