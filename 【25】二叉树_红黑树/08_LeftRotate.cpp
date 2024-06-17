#include "head.h"
void LeftRotate(RBNode*& psource) {
	RBNode* p = psource;
	psource = p->rchild;
	p->rchild = psource->lchild;
	psource->lchild = p;
	psource->parent = p->parent;
	p->parent = psource;
	COLOR temp = psource->color;
	psource->color = p->color;
	p->color = temp;
}
