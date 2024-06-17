#include"head.h"
// 创建一般二叉树，用”#“将一般二叉树填充为完全二叉树后，输入完全二叉树
void CreateBiTree(BiTree& T) {
	BiTNode* pnew = NULL;
	LinkQueue Q;
	InitQueue(Q);
	for (TreeElemType x;scanf("%c", &x) != EOF && x != '\n';) {
		if (x != '#') {
			pnew = (BiTNode*)calloc(1, sizeof(BiTNode));
			pnew->data = x;
			EnQueue(Q, pnew);
		}
		if (T == NULL)
			T = pnew;
		else {
			if (Q.front->data->lchild == NULL && Q.front->lchild_is_visited == 0) {
				if (x == '#')
					Q.front->lchild_is_visited = 1;
				else
					Q.front->data->lchild = pnew;
			}
			else {
				if (x != '#')
					Q.front->data->rchild = pnew;
				QElemType e;
				DeQueue(Q, e);
			}
		}
	}
}
