#include"head.h"
void PreOrder(BiTree T) {  // 借助栈S实现先序遍历
	BiTNode* p = T;
	LinkStack S;InitStack(S);
	while (p != NULL||!StackEmpty(S)) {
		if (p != NULL) {
			putchar(p->data);
			Push(S, p->rchild);
			p = p->lchild;
		}
		else 
			Pop(S, p);
	}
	putchar('\n');
}

//void PreOrder(BiTree T) {  // 使用递归方式实现先序遍历
//	if (T != NULL) {
//		putchar(T->data);
//		PreOrder(T->lchild);
//		PreOrder(T->rchild);
//	}
//}

