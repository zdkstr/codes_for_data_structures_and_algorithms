#include"head.h"
//typedef int SElemType;
//typedef struct SNode {
//	SElemType data;
//	struct SNode* next;
//}SNode, * LinkStack;
//
//void InitStack(LinkStack& S);
//void Push(LinkStack& S, SElemType e);
//bool Pop(LinkStack& S, SElemType& e);
//bool GetTop(LinkStack S, SElemType& e);
//bool StackEmpty(LinkStack S);
//void DestroyStack(LinkStack& S);
//
void InitStack(LinkStack& S) {
	S = NULL;
}
void Push(LinkStack& S, SElemType e) {
	SNode* pnew;
	pnew = (SNode*)malloc(sizeof(SNode));
	pnew->data = e;
	pnew->next = S;
	S = pnew;
}
bool Pop(LinkStack& S, SElemType& e) {
	if (S == NULL)
		return false;
	SNode* q;
	q = S;
	S = S->next;
	e = q->data;
	free(q);
	return true;
}
bool GetTop(LinkStack S, SElemType& e) {
	if (S == NULL)
		return false;
	e = S->data;
	return true;
}
bool StackEmpty(LinkStack S) {
	return S == NULL;
}
void DestroyStack(LinkStack& S) {
	SNode* p;
	p = S;
	while (p != NULL) {
		S = S->next;
		free(p);
		p = S;
	}
}