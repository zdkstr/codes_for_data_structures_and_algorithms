#include"head.h"
//非递归查找
BSTNode* BST_Search(BSTree T, KeyType key) {
	while (T != NULL&&T->Key!=key) {
		if (T->Key < key) {
			T = T->rchild;
		}else {
			T = T->lchild;
		}
	}
	return T;
}

//// 递归方式
//BSTNode* BSTSearch(BSTree T, KeyType key) {
//	while (T != NULL && T->Key != key) {
//		if (T->Key < key) {
//			T = T->rchild;
//		}
//		else {
//			T = T->lchild;
//		}
//	}
//	return T;
//}

