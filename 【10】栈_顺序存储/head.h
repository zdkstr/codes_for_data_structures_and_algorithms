#include<stdio.h>
#include<stdlib.h>
#define MaxSize 20
typedef int ElemType;
typedef struct {
	ElemType data[MaxSize];
	int top;
}SqStack;

void InitStack(SqStack& S);
bool Push(SqStack& S, ElemType x);
bool Pop(SqStack& S, ElemType& x);
bool GetTop(SqStack &S, ElemType& e);
bool StackEmpty(SqStack &S);
bool StackFull(SqStack &S);
int GetNumber(SqStack &S);
