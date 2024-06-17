#include"head.h"
void PostOrder(BiTree T) {  // 借助栈S实现后序遍历
	BiTNode* p = T,*p_visited=NULL;
	LinkStack S;InitStack(S);
	while (p!=NULL || !StackEmpty(S)) {
		if (p != NULL) {
			Push(S, p);
			p = p->lchild;
		}
		else {
			GetTop(S, p);
			if (p->rchild != NULL && p->rchild != p_visited) {
				p = p->rchild;
			}
			else {
				Pop(S, p);
				putchar(p->data);
				p_visited = p;
				p = NULL;
			}
		}
	}
	putchar('\n');
}

//void PostOrder(BiTree p) {  // 递归方式实现后序遍历
//	if (p != NULL) {
//		PostOrder(p->lchild);
//		PostOrder(p->rchild);
//		putchar(p->data);
//	}
//}

//算法思想：后序非递归遍历二叉树是先访问左子树，再访问右子树，最后访问根结点。
//算法分析：1、沿着根的左孩子，依次入栈，直到左孩子为空。
//		   2、读栈顶元素：若其右孩子不空且未被访问过，将右子树转执行步骤1，
//						  否则栈顶元素出栈并访问
