#include"head.h"
BiTree PreInCreate(TreeElemType A[], TreeElemType B[], int l1, int h1, int l2, int h2) {
	//l1 = l2 = 1, h1 = h2 = n;
	BiTree root = (BiTree)calloc(1, sizeof(BiTNode));
	root->data = A[l1];
	int i;
	for ( i = l2;B[i] != root->data;i++);
	int LeftTreeLength = i - l2;
	int RrightTreeLength = h2 - i;
	if (LeftTreeLength)
		root->lchild = PreInCreate(A, B, l1 + 1, l1 + LeftTreeLength, l2, l2 + LeftTreeLength - 1);
	else
		root->lchild = NULL;
	if (RrightTreeLength)
		root->rchild = PreInCreate(A, B, h1 - RrightTreeLength + 1, h1, h2 - RrightTreeLength + 1, h2);
	else
		root->rchild = NULL;
	return root;
}
