#include"head.h"
BiTNode* pre2;
void visit_in(BiTNode* q) {
	if (q->lchild == NULL) {
		q->lchild = pre2;
		q->ltag = 1;
	}
	if (pre2 != NULL && pre2->rchild == NULL) {
		pre2->rchild = q;
		pre2->rtag = 1;
	}
	pre2 = q;
}
void in_thread(BiTree T) {
	if (T != NULL) {
		in_thread(T->lchild);
		visit_in(T);
		in_thread(T->rchild);
	}
}
void InThread(BiTree &T) {
	pre2 = NULL;
	if (T != NULL) {
		in_thread(T);
		if (pre2->rchild == NULL)
			pre2->rtag = 1;
	}
}
