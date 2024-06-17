#include"head.h"
void InvertLevelOrder(BiTree T) {
	LinkStack S;
	LinkQueue Q;
	if (T != NULL) {
		InitStack(S);
		InitQueue(Q);
		BiTNode* p;
		EnQueue(Q, T);
		while (!QueueEmpty(Q)) {
			DeQueue(Q, p);
			Push(S, p);
			if (p->lchild != NULL)
				EnQueue(Q, p->lchild);
			if (p->rchild != NULL)
				EnQueue(Q, p->rchild);
		}
		while (!StackEmpty(S)) {
			Pop(S, p);
			putchar(p->data);
		}
		putchar('\n');
	}
	
}
