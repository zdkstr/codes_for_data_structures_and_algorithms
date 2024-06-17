#include"head.h"
//左重右轻，进行右旋
void R_Rotate(AVLTree &T){
    AVLTNode* p = T;
    T = T->lchild;
    p->lchild = T->rchild;
    T->rchild = p;
}
