#include"head.h"
void Push(LinkStack& S,ElemType e) {  // 头插法实现入栈
	SNode* pnew;
	pnew = (SNode*)malloc(sizeof(SNode));
	pnew->data = e;
	pnew->next = S;
	S = pnew;
}
