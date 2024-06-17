#include"head.h"
int main()
{
	SqStack S;int x;
	InitStack(S);
	Push(S, 1);
	Push(S, 2);
	Pop(S, x);
	printf("%d ", x);
	GetTop(S,x);
	printf("%d ", x);  
}
