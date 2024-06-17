#include"head.h"
bool AVLTreeDelete(AVLTree& T, ElemType e, bool* tree_is_lower) {
	if(T == NULL) return false;
	//找到待删除结点时，根据平衡二叉树的性质，有
	if (T->data == e) {
		//若右子树为空，则左子树只能是为空或有一个结点，删除根结点后高度减1
		if (T->rchild == NULL) {   
			AVLTNode* p = T;
			T = T->lchild;
			free(p);
			*tree_is_lower = true;
		}
		//若左子树为空，则右子树只能是有一个结点（空的情况已被排除），删除根结点后高度减1
		else if (T->lchild == NULL) {
			AVLTNode* p = T;
			T = T->rchild;
			free(p);
			*tree_is_lower = true;
		}
		//若左右子树都不为空，将问题转换为：查找一棵子树中与根结点在中序序列中相邻的结点，交换数值然后删除。
		else {
			AVLTNode* p = T -> lchild;
			while (p != NULL) p = p->rchild;
			T->data = p->data;
			AVLTreeDelete(T->lchild, p->data, tree_is_lower);
		}
	}
	//从顶层向下递归查找待删除的结点
	else if (e < T->data) {
		//若查找不到待删除结点，则直接返回失败
		if (!AVLTreeDelete(T->lchild, e, tree_is_lower)) return false;
		//若删除成功，则从最后的删除位置向上逆向递归进行平衡调整
		if (*tree_is_lower) {
			switch (T->balance)
			{
			case EH:
				T->balance = RH;
				*tree_is_lower = false;
				break;
			case LH:
				T->balance = EH;
				*tree_is_lower = true;
				break;
			case RH:
				RightTreeBalance(T);
				*tree_is_lower = true;
				break;
			}
		}
	}
	else {
		if (!AVLTreeDelete(T->rchild, e, tree_is_lower)) return false;
		if (*tree_is_lower) {
			switch (T->balance)
			{
			case EH:
				T->balance = LH;
				*tree_is_lower = false;
				break;
			case RH:
				T->balance = EH;
				*tree_is_lower = true;
				break;
			case LH:
				LeftTreeBalance(T);
				*tree_is_lower = true;
				break;
			}
		}
	}
	return true;
}
