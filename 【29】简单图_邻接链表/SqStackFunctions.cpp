#include"head.h"
//#define MaxSize 20
//typedef int ElemType;
//typedef struct {
//	ElemType data[MaxSize];
//	int top;
//}SqStack;
//
//void InitStack(SqStack& S);
//bool Push(SqStack& S, ElemType x);
//bool Pop(SqStack& S, ElemType& x);
//bool GetTop(SqStack S, ElemType& e);
//bool StackEmpty(SqStack S);
//bool StackFull(SqStack S);
//void DestroyStack(SqStack& S);


void InitStack(SqStack& S) {
	S.top = -1;
}
bool Push(SqStack& S, ElemType x) {
	if (S.top == MaxSize - 1)
		return false;
	S.data[++S.top] = x;
	return true;
}
bool Pop(SqStack& S, ElemType& x) {
	if (S.top == -1)
		return false;
	x = S.data[S.top--];
	return true;
}
bool GetTop(SqStack S, ElemType& e) {
	if (S.top == -1)
		return false;
	e = S.data[S.top];
	return true;
}
bool StackEmpty(SqStack S) {
	return S.top == -1;
}
bool StackFull(SqStack S) {
	return S.top == MaxSize - 1;
}