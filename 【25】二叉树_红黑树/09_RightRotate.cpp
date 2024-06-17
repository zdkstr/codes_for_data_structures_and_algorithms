#include "head.h"
void RightRotate(RBNode*& psource) {
	RBNode* p = psource;
	psource = p->lchild;
	p->lchild = psource->rchild;
	psource->rchild = p;
	psource->parent = p->parent;
	p->parent = psource;
	COLOR temp = psource->color;
	psource->color = p->color;
	p->color = temp;
}
