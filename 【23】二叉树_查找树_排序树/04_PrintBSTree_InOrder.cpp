 #include"head.h"
void BSTreeInOrder(BSTree T) {
	if (T != NULL) {
		BSTreeInOrder(T->lchild);
		printf("%d ", T->Key);
		BSTreeInOrder(T->rchild);
	}
}
