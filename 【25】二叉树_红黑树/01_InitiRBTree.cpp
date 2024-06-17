#include "head.h"
void InitRBTree(RBTree& T, RBNode&null_node) {
	T = NULL;
	null_node.data = 0;
	null_node.color = B;
	null_node.parent = NULL;
	null_node.rchild = NULL;
	null_node.lchild = NULL;
}
