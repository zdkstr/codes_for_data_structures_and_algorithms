#include"head.h"
void BSTreeDelete(BSTree& T, KeyType k) {
	if (T == NULL)
		return;
	if (T->Key > k)
		BSTreeDelete(T->lchild, k);
	else if (T->Key < k)
		BSTreeDelete(T->rchild, k);
	else {
		if (T->rchild == NULL) {
			BSTNode* p = T;
			T = T->lchild;
			free(p);
		}
		else if (T->lchild == NULL) {
			BSTNode* p = T;
			T = T->rchild;
			free(p);
		}
		else {
			BSTNode* p = T->lchild;
			if (p->rchild != NULL)
				p = p->rchild;
			T->Key = p->Key;
			BSTreeDelete(T->lchild, p->Key);
		}
	}
}
