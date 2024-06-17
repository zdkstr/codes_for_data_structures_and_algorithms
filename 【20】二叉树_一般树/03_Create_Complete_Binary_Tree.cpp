#include"head.h"
// 创建完全二叉树
void Create_Complete_Binary_Tree(BiTree& T) {
	BiTNode* pnew;LinkQueue Q;InitQueue(Q);
	for (TreeElemType x;scanf("%c", &x) != EOF&&x!='\n';) {
		pnew = (BiTNode*)calloc(1, sizeof(BiTNode));
		pnew->data = x;
		EnQueue(Q, pnew);
		if (T == NULL)
			T = pnew;
		else {
			if (Q.front->data->lchild == NULL) {				
				Q.front->data->lchild = pnew;
			}
			else{
				Q.front->data->rchild = pnew;
				QElemType e;
				DeQueue(Q, e);
			}
		}
	}
}
