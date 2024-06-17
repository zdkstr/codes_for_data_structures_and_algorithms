#include"head.h"
void CreateAVLTree(AVLTree& T) {
	bool tree_is_taller=false;
	for (ElemType x;scanf("%d", &x) != EOF && x != 9999;)
		AVLTreeInsert(T, x,&tree_is_taller);
}
