#include "head.h"
//从插入位置开始调整红黑树
void InsertFixup(RBTree& T, RBNode* pnew) {
	//若插入位置是根结点，则只需调整新结点为黑色
	if (pnew->parent == NULL) {
		pnew->color = B;
		return;
	}
	//新结点的父结点为黑色时，无需调整
	if (pnew->parent->color == B)  return;
	//新结点的父结点为红色时，根据新结点的位置类型及叔结点的颜色进行调整
	else {
		RBNode* pnew_grand = pnew->parent->parent; //确认祖结点的位置
		RBNode* pnew_uncle;                       
		//确认位置类型
		STATE state;
		if (pnew_grand->lchild == pnew->parent) {
			pnew_uncle = pnew_grand->rchild;       // 确认叔结点的位置
			if (pnew->parent->lchild == pnew)
				state = LL;                       // 新结点的位置类型为LL
			else
				state = LR;						  // 新结点的位置类型为LR
		}
		else {
			pnew_uncle = pnew_grand->lchild;
			if (pnew->parent->lchild == pnew)
				state = RL;						// 新结点的位置类型为RL
			else
				state = RR;                     // 新结点的位置类型为RR
		}
		//叔结点为红色时，调整结点颜色,将祖结点视作新插入的结点进行结构调整
		if (pnew_uncle->color==R) {
			pnew_uncle->color = B;
			pnew->parent->color = B;
			pnew_grand->color = R;
			InsertFixup(T, pnew_grand);
		}
		//叔结点为黑色时，根据新结点位置类型进行调整
		else {
			switch (state) {
			case LR:
				//先以父结点为枢轴结点进行左旋，将问题转化为以父结点为插入位置的调整问题，适用下一种情况
				LeftRotate(pnew_grand->lchild);
				//注意，这里没有break，直接执行下一种情况的代码

			case LL:
				//以祖结点为枢轴结点进行右旋，从而实现分散红结点、保持黑高的功能
				if (pnew_grand->parent == NULL)
					RightRotate(T);
				else if (pnew_grand->parent->lchild == pnew_grand)
					RightRotate(pnew_grand->parent->lchild);
				else
					RightRotate(pnew_grand->parent->rchild);
				break;

			case RL:
				RightRotate(pnew_grand->rchild);

			case RR:
				if (pnew_grand->parent == NULL)
					LeftRotate(T);
				else if (pnew_grand->parent->lchild == pnew_grand)
					LeftRotate(pnew_grand->parent->lchild);
				else
					LeftRotate(pnew_grand->parent->rchild);
				break;
			}
		}
	}
}
