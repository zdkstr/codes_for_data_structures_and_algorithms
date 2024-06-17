#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct SNode{
	ElemType data;
	struct SNode* next;
}SNode,*LinkStack;

void InitStack(LinkStack& S);
void Push(LinkStack& S, ElemType e);
bool Pop(LinkStack& S, ElemType& e);
bool GetTop(LinkStack S, ElemType& e);
bool StackEmpty(LinkStack S);
void DestroyStack(LinkStack& S);