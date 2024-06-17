#include"head.h"

int BiTreeDepth(BiTree T) {  // 递归方式实现对深度的查询
	if (T == NULL)
		return 0;
	int LTreeDepth = BiTreeDepth(T->lchild);
	int RTreeDepth = BiTreeDepth(T->rchild);
	if (LTreeDepth > RTreeDepth)
		return LTreeDepth + 1; 
	else
		return RTreeDepth + 1;
}

//采用层次遍历的算法，设置变量level记录当前结点所在的层数，设置变量last指向当前层的最右结点，每次层次遍历出队时与last指针比较，若两者相等，则层数加一，并让last指向下一层的最右结点，直到遍历完成。
//#define MaxSize 100
//int BiTreeDepth(BiTree T) {
//	if (T==NULL)
//		return 0;
//	int front = -1, rear = -1;
//	int last = 0, level = 0;
//	BiTNode* Q[MaxSize];
//	Q[++rear] = T;
//	BiTNode* p;
//	while (front < rear) {
//		p = Q[++front];
//		if (p->lchild!=NULL)
//			Q[++rear] = p->lchild;
//		if (p->rchild != NULL)
//			Q[++rear] = p->rchild;
//		if (front == last) {
//			level++;
//			last = rear;
//		}
//	}
//	return level;
//}
