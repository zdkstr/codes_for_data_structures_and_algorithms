#include<stdio.h>
#include<stdlib.h>
#define MaxSize 100
typedef int ElemType;
typedef struct {
	ElemType data[MaxSize];
	int top1;
	int top2;
}SharedStack;

void InitStack(SharedStack& S);
bool Push(SharedStack& S, int i, ElemType e);
bool Pop(SharedStack& S, int i, ElemType& x);