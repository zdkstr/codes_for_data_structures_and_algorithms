#include"head.h"
int AVLTreeInsert(AVLTree &T, ElemType e, bool* tree_is_taller)
{
    //如果本身为空树，则直接添加新元素 e 为根结点
    if (T == NULL){
        T= (AVLTree)malloc(sizeof(AVLTNode));
        T->balance = EH;
        T->data = e;
        T->lchild = NULL;
        T->rchild = NULL;
        *tree_is_taller = true;
    }
    //如果二叉排序树中已经存在新元素 e ，则不做任何处理
    else if (e == T->data){
        *tree_is_taller = false;
        return 0;
    }
    //如果新元素 e 小于结点 T 的数据域，则插入到 T 的左子树中
    else if (e < T->data){
        //从顶层向下递归查找插入的位置
        if (!AVLTreeInsert(T->lchild, e,tree_is_taller))
            return 0; // 未插入新元素，返回
        //从插入位置向上逆向递归，根据插入结果调整子树的平衡
        if (*tree_is_taller)//插入操作使子树增高，需依据根结点的平衡因子进行调整
        {
            switch (T->balance)
            {
            case LH://原本就比右子树高的左子树更高了，需调整
                LeftTreeBalance(T);
                *tree_is_taller = false;//调整后，母树的高度不变
                break;
            case  EH:
                T->balance = LH;
                *tree_is_taller = true;
                break;
            case RH:
                T->balance = EH;
                *tree_is_taller = false;
                break;
            }
        }
    }
    //同样，当 e>T->data 时，需要插入到以 T 为根结点的树的右子树中，同样需要做和以上同样的操作
    else
    {
        if (!AVLTreeInsert(T->rchild, e, tree_is_taller))
            return 0;
        if (*tree_is_taller)
        {
            switch (T->balance)
            {
            case LH:
                T->balance = EH;
                *tree_is_taller = false;
                break;
            case EH:
                T->balance = RH;
                *tree_is_taller = true;
                break;
            case  RH:
                RightTreeBalance(T);
                *tree_is_taller = false;
                break;
            }
        }
    }
    return 1;
}
