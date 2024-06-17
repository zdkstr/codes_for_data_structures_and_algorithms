#include"head.h"
//算法思想：采用非递归后序遍历，最后访问根结点，访问到值为x的结点时，栈中所有元素均为该结点的祖先，依次出栈打印即可。
typedef struct {
	BiTNode *p;
	int tag;
}stack;
void Search(BiTree T, TreeElemType x) {
	stack s[50];
	int top = 0;
	while (T != NULL || top > 0) {
		while (T != NULL && T->data != x) {
			s[++top].p = T;
			s[top].tag = 0;//表示左子女被访问
			T = T->lchild;
		}
		if (T != NULL && T->data == x) {
			printf("所查结点的所有祖先结点的值为:\n");
			for (int i = 1;i <= top;i++)
				printf("%d", s[i].p->data);
			exit(1);
		}
		while (top != 0 && s[top].tag == 1) top--;
		if (top != 0) {
			s[top].tag = 1;
			T = s[top].p->rchild;
		}
	}
	
}
