#include"head.h"
void InitStack(LinkStack& S) {  // 带头结点
	S =(LinkStack)malloc(sizeof(SNode));
	S->next=NULL;
}
