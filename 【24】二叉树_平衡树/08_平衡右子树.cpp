#include"head.h"
//右子树的平衡处理同左子树的平衡处理完全类似
void RightTreeBalance(AVLTree &T)
{
    AVLTNode *p, *q;
    p = T->rchild;
    switch (p->balance)
    {
    case RH:
        T->balance = p->balance = EH;
        L_Rotate(T);
        break;
    case LH:
        q = p->lchild;
        switch (q->balance)
        {
        case LH:
            T->balance = EH;
            p->balance = RH;
            break;
        case EH:
            T->balance = p->balance = EH;
            break;
        case RH:
            T->balance = EH;
            p->balance = LH;
            break;
        }
        q->balance = EH;
        R_Rotate(T->rchild);
        L_Rotate(T);
        break;
    }
}
