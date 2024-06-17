#include"head.h"
void CreateBSTree(BSTree& T) {
	for (KeyType x;scanf("%d", &x) && x != 9999;)
			BSTreeInsert(T,x);
}
