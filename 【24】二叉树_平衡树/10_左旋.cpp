#include"head.h"
void L_Rotate(AVLTree &T){
    AVLTNode* p = T;
    T = T->rchild;
    p->rchild = T->lchild;
    T->lchild = p;
}
