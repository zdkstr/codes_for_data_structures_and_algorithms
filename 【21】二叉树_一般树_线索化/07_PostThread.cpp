#include"head.h"
BiTNode* pre3;
void visit_post(BiTNode* p) {
	// 前一个结点的右子树为空时，进行线索化，使指向当前结点
	if (pre3 != NULL && pre3->rchild == NULL) { 
		pre3->rchild = p;
		pre3->rtag = 1;
	}
	// 当前结点的左子树为空时，进行线索化，使指向前一个结点
	if (p->lchild == NULL) {
		p->lchild = pre3;
		p->ltag = 1;
	}
	pre3 = p;
}
void post_thread(BiTree T) {
	if (T != NULL) {
		post_thread(T->lchild);
		post_thread(T->rchild);
		visit_post(T);
	}
}
void PostThread(BiTree &T) {
	pre3 = NULL;
	if (T != NULL)
		post_thread(T);
	if (pre3->rchild == NULL)
		pre3->rtag = 1;
} 
