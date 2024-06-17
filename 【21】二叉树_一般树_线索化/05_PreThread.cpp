#include"head.h"
BiTNode* pre1;
void visit_pre(BiTNode* T) {
	if (pre1 != NULL && pre1->rchild == NULL) {
		pre1->rchild = T;
		pre1->rtag = 1;
	}
	if (T->lchild == NULL) {
		T->lchild = pre1;
		T->ltag = 1;
	}
	pre1 = T;
}
void pre_thread(BiTree &T) {
	if (T != NULL) {
		visit_pre(T);
		if (T->ltag == 0) pre_thread(T->lchild);
		if (T->rtag == 0) pre_thread(T->rchild);
	}
}
void PreThread(BiTree &T) {
	pre1 = NULL;
	if (T != NULL) {
		pre_thread(T);
		if (pre1->rchild == NULL)
			pre1->rtag = 1;
	}
}
