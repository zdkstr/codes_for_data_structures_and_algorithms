#include"head.h"
void InOrder(BiTree T) {  // 借助栈S实现中序遍历
	BiTNode* p = T;
	LinkStack S;InitStack(S);
	while (p != NULL || !StackEmpty(S)) {
		if (p != NULL) {
			Push(S, p);
			p = p->lchild;
		}
		else {
			Pop(S, p);
			putchar(p->data);
			p = p->rchild;
		}
	}
	putchar('\n');
}

//void InOrder(BiTree T) {  // 递归方式实现中序遍历
//	if (T != NULL) {
//		InOrder(T->lchild);
//		putchar(T->data);
//		InOrder(T->rchild);
//	}
//}


