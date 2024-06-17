#include "head.h"
//按二叉排序树的规则向红黑树插入一个红结点
RBNode* Insert(RBTree& T, datatype e, RBNode* p_null_node) {
	//初始化新结点
	RBNode* pnew = (RBNode*)malloc(sizeof(RBNode));
	pnew->color = R;
	pnew->data = e;
	pnew->lchild = p_null_node;
	pnew->rchild = p_null_node;
	//红黑树是空树时，直接插入新结点，确认新结点的父母
	if (T == NULL) {
		pnew->parent = NULL;
		T = pnew;
		return pnew;
	}
	//采用非递归方式查找插入位置，以便确认插入位置的父母结点
	RBNode* p = T; RBNode* pre = NULL;int flag = 0;
	while (p != p_null_node) {
		pre = p;
		if (e <= p->data) {
			flag = 0;         //标注向左
			p = p->lchild;
		}
		else {
			flag = 1;		 //标注向右
			p = p->rchild;
		}
	}
	//找到插入位置后，确认新结点的身份及其父母结点，
	pnew->parent = pre;
	if (flag == 0)
		pre->lchild = pnew;  // 新结点是左孩子
	else
		pre->rchild = pnew;  // 新结点是右孩子

	return pnew;            //返回指向插入位置的指针，以便调整红黑树的树形结构
}
