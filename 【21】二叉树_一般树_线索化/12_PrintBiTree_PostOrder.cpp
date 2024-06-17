#include"head.h"
BiTNode* PreNode3(BiTNode* p) {
	if (p->ltag == 1)           // 若被线索化，则左指针域原本为空，现在指向上一个结点
		return p->lchild;
	else{                       // 未被线索化，则左指针域原本非空，现在指向左子树
		if (p->rtag==0)         // 若未被线索化，则右指针域原本非空，现在指向右子树
			return p->rchild;   // 右子树非空时，其根结点就是上一个结点
		else                    
			return p->lchild;   // 右子树为空时，左子树的根结点就是上一个结点
	}
}

void PrintBiTree_PostOrder(BiTree T) {
	BiTNode* p=T;
	LinkStack S;InitStack(S);
	while (p != NULL) {
		Push(S,p->data);
		p = PreNode3(p);
	}
	while (! StackEmpty(S) ){
		TreeElemType x;
		Pop(S, x);
		putchar(x);
	}
	putchar('\n');	
}
