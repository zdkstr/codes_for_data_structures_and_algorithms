#include"head.h"
BiTNode* LastNode(BiTNode* p) {
	while (p->rtag == 0)
		p = p->rchild;
	return p;
}
BiTNode* PreNode(BiTNode* p) {
	if (p->ltag == 1)
		return p->lchild;
	else
		return LastNode(p->lchild);
}
void PrintBiTree_InvertInOrder(BiTree T) {
	BiTNode* p;
	p = LastNode(T);
	while (p != NULL) {
		putchar(p->data);
		p = PreNode(p);
	}
	putchar('\n');
}
