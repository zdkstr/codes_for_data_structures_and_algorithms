#include"head.h"
BiTNode* NextNode2(BiTNode* p) {
	if (p->rtag == 1)        // 若被线索化，则右指针域原本为空，现在指向后一个结点
		return p->rchild;
	else{                    // 未被线索化，则右指针域原本非空，现在指向右子树
		if (p->ltag == 0)    // 未被线索化，则右指针域原本非空，现在指向左子树
			return p->lchild; // 左子树为空时，左子树的根结点就是下一个结点
		else                 
			return p->rchild; // 左子树为空时，右子树的根结点就是下一个结点
	}
}
void PrintBiTree_PreOrder(BiTree T) {
	BiTNode* p=T;
	while (p != NULL) {
		putchar(p->data);
		p = NextNode2(p);
	}
	putchar('\n');
}

