#include"head.h"
void BSTreeInsert(BSTree& T, KeyType x) {
	if (T == NULL) {
		T = (BSTNode*)calloc(1, sizeof(BSTNode));
		T->Key = x;
		return;
	}
	if (T->Key == x)  // 不插入相同数据
		return;
	if (x < T->Key)
		BSTreeInsert(T->lchild, x);
	else
		BSTreeInsert(T->rchild, x);
}
