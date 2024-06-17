#include"head.h"

void DeleteXTree(BiTree &T) {
	if (T) {
		DeleteXTree(T->lchild);
		DeleteXTree(T->rchild);
		free(T);
	}
}
void SearchXTree(BiTree &T, TreeElemType x) {
	LinkQueue Q;
	if (T!=NULL) {
		if (T->data == x) {
			DeleteXTree(T);
			exit(0);
		}
		InitQueue(Q);
		EnQueue(Q, T);
		BiTNode* p;
		while (!QueueEmpty(Q)) {
			DeQueue(Q, p);
			if (p->lchild) {
				if (p->lchild->data == x) {
					DeleteXTree(p->lchild);
					p->lchild = NULL;
				}
				else
					EnQueue(Q, p->lchild);
			}
			if (p->rchild)
				if (p->rchild->data == x) {
					DeleteXTree(p->rchild);
					p->rchild = NULL;
				}
				else
					EnQueue(Q, p->rchild);
			else{
				
			}
		}
	}
}
