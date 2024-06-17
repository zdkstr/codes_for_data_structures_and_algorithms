 #include"head.h"
void AVLTreeInOrder(AVLTree T) {
	if (T != NULL) {
		AVLTreeInOrder(T->lchild);
		printf("%d ", T->data);
		AVLTreeInOrder(T->rchild);
	}
}
