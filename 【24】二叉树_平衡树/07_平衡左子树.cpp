#include"head.h"
//对以指针T所指向结点为根结点的二叉树作左子树的平衡处理，令指针T指向新的根结点
void LeftTreeBalance(AVLTree &T)
{
    AVLTNode *p, *q;
    p = T->lchild;
	//查看以 T 的左孩子为根结点的子树，判断失去平衡的原因，如果 bf 值为 1 ，
	//则说明添加在左子树为根结点的左子树中，需要对其进行右旋处理；
	//反之，如果 bf 值为 -1，说明添加在以左子树为根结点的右子树中，
	//需要进行双向先左旋后右旋的处理
    switch (p->balance)
    {
    case LH://左边高，左边重，右旋
        T->balance = p->balance = EH;
        R_Rotate(T);
        break;
    case RH:
        q = p->rchild;
        switch (q->balance)
        {
        case LH:
            T->balance = RH;
            p->balance = EH;
            break;
        case EH:
            T->balance = p->balance = EH;
            break;
        case RH:
            T->balance = EH;
            p->balance = LH;
            break;
        }
        q->balance= EH;
        L_Rotate(T->lchild);
        R_Rotate(T);
        break;
    }
}
