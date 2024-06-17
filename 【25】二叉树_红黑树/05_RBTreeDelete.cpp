#include "head.h"
void RBTreeDelete(RBTree& T, datatype e, RBNode* p_null_node) {
	// 空树返回
	if (T == NULL) return;

	// 查找待删结点
	RBNode* p = T;
	while (p != p_null_node) {
		if (e < p->data)
			p = p->lchild;
		else if (e > p->data)
			p = p->rchild;
		else
			break;
	}

	// 未找到待删结点,返回
	if (p == p_null_node) return;

	// 找到待删结点后，确认其后代的情况
	
	// 一、左右子树都存在
	if (p->lchild != p_null_node && p->rchild != p_null_node) {
		//查找删除位置的前驱
		RBNode* q = p->lchild;
		while (q->rchild != p_null_node)
			q = q->rchild;
		//要删除的结点的数值替换为前驱结点的数值
		p->data = q->data;
		//将问题转为删除前驱结点
		RBTreeDelete(q, q->data, p_null_node);
	}

	// 二、只有左子树存在
	else if (p->lchild != p_null_node) {  // 左子树只可能是一个红结点
		//要删除的结点为根结点
		if (p->parent == NULL) {
			T = p->lchild;
			T->color = B;
		}
		//要删除的结点不是根结点，但一定是黑结点
		else {
			if (p->parent->lchild == p) {
				p->parent->lchild = p->lchild;
				p->parent->lchild->color = B;
			}
			else {
				p->parent->rchild = p->lchild;
				p->parent->rchild->color = B;
			}
		}
		free(p);
	}

	// 三、只有右子树存在
	else if (p->rchild != p_null_node) {
		if (p->parent == NULL) {
			T = p->rchild;
			T->color = B;
		}
		else if (p->parent->lchild == p) {
			p->parent->lchild = p->rchild;
			p->parent->lchild->color = B;
		}
		else {
			p->parent->rchild = p->rchild;
			p->parent->rchild->color = B;
		}
		free(p);
	}
	
	// 四、没有子树
	else {
		// 待删结点是根结点
		if (p->parent == NULL) { 
			T = NULL;
			free(p); 
		}

		// 待删结点不是根结点
		else {
			// 待删结点是红色的，直接删除
			if (p->color == R) {
				if (p->parent->lchild == p)
					p->parent->lchild = p_null_node;
				else
					p->parent->rchild = p_null_node;
				free(p);
			}
			// 待删结点是黑色的，不是根结点，必有兄弟子树
			else {
				RBNode* p_brother;
				RBNode* p_to_del = p;
				int flag = 1;           // 表示未平衡黑高
				COLORSTATE colorstate;

				//  在逻辑上将待删除结点视作红色的空结点，红黑树失衡，平衡后再删除结点
				while (flag == 1) {
					flag = 0;

					// 待删结点在左边时，确认兄弟子树的颜色分布，尝试借一个结点平衡黑高
					if (p->parent->lchild == p) {
						p_brother = p->parent->rchild; 
						//兄弟结点为红时，左侄子必存在且为黑，右侄子必存在且为黑
						if (p_brother->color == R)
							colorstate = RBB;
						// 兄弟结点为黑时，若侄子存在，必为红结点，分类情况如下
						else {
							// 一、左侄子未知，但右侄子存在
							if (p_brother->rchild->color == R)
								colorstate = BXR;
							// 二、左侄子存在，右侄子不存在
							else if(p_brother->lchild->color == R)
								colorstate = BRN;
							// 三、左侄子不存在，右侄子不存在
							else
								colorstate = BNN;
						}

						// 根据颜色情况平衡黑高
						switch (colorstate) {
						case RBB:
							// 以父结点为枢轴进行左旋
							if (p->parent->parent == NULL)
								LeftRotate(T);
							else if (p->parent->parent->lchild == p->parent)
								LeftRotate(p->parent->parent->lchild);
							else
								LeftRotate(p->parent->parent->rchild);
							// 调整结点颜色
							p->parent->color = B;
							p->parent->rchild->color = R;
							break;

						case BRN:
							RightRotate(p->parent->rchild);
							// 没有break,继续执行

						case BXR:
							// 以父结点为枢轴进行左旋
							if (p->parent->parent == NULL)
								LeftRotate(T);
							else if (p->parent->parent->lchild == p->parent)
								LeftRotate(p->parent->parent->lchild);
							else
								LeftRotate(p->parent->parent->rchild);
							// 调整结点颜色
							p_brother->rchild->color = B;
							break;

						case BNN:  // 兄弟子树只有一个结点，无法外借结点，只能到更高层次的树中进行平衡
							// 父结点为红色，则父结点所在子树的黑高为1，只需进行颜色调整
							if (p->parent->color == R) {
								p->parent->color = B;
								p_brother->color = R;
							}
							// 父结点为黑色，则父结点所在子树的黑高为2，将黑高视作1，红黑树失衡，向父结点的兄弟子树借一个结点平衡黑高
							else {
								p->parent->rchild->color = R;
								if (p->parent->parent != NULL) {
									flag = 1;
									p = p->parent;
								}
							}
							break;
						}
					}


					// 待删结点在右边时，确认兄弟结点的家庭颜色情况，平衡黑高
					else {
						// 确认兄弟结点的家庭颜色情况
						p_brother = p->parent->lchild;
						if (p_brother->color == R)
							colorstate = RBB;
						else if (p_brother->lchild->color == R)
							colorstate = BRX;
						else if (p_brother->rchild->color == R)
							colorstate = BNR;
						else
							colorstate = BNN;

						//根据兄弟家庭的颜色情况进行调整
						switch (colorstate) {
						case RBB:
							if (p->parent->parent == NULL)
								RightRotate(T);
							else if (p->parent->parent->lchild == p->parent)
								RightRotate(p->parent->parent->lchild);
							else
								RightRotate(p->parent->parent->rchild);
							p->parent->color = B;
							p->parent->lchild->color = R;
							break;

						case BNR:
							LeftRotate(p->parent->lchild);
						case BRX:
							if (p->parent->parent == NULL)
								RightRotate(T);
							else if (p->parent->parent->lchild == p->parent)
								RightRotate(p->parent->parent->lchild);
							else
								RightRotate(p->parent->parent->rchild);
							p_brother->lchild->color = B;
							break;

						case BNN:
							if (p->parent->color == R) {
								p->parent->color = B;
								p->parent->lchild->color = R;
							}
							else {
								p->parent->lchild->color = R;
								if (p->parent->parent != NULL) {
									flag = 1;
									p = p->parent;
								}
							}
							break;
						}
					}
				}
				
				// 删除结点
				if (p_to_del->parent->lchild == p_to_del)
					p_to_del->parent->lchild = p_null_node;
				else
					p_to_del->parent->rchild = p_null_node;
				free(p_to_del);
			}
		}	
	}
}
