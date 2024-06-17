#include"head.h"
BiTNode* FirstNode(BiTNode* p) {
	while (p->ltag == 0)
		p = p->lchild;
	return p;
}
BiTNode* NextNode(BiTNode* p) {
	if (p->rtag == 1)
		return p->rchild;
	else
		return FirstNode(p->rchild);
}
void PrintBiTree_InOrder(BiTree T) {
	BiTNode* p;
	p = FirstNode(T);
	while (p != NULL) {
		putchar(p->data);
		p = NextNode(p);
	}
	putchar('\n');
}


