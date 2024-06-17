#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>

//定义平衡因子数
#define LH +1  // 表示左子树比右子树多一层
#define EH  0
#define RH -1

typedef int ElemType;

typedef struct AVLTNode {
    ElemType data;
    int balance;  // 平衡因子
    struct AVLTNode* lchild, * rchild;
}*AVLTree, AVLTNode;

void InitAVLTree(AVLTree& T);
void CreateAVLTree(AVLTree& T);
void PrintAVLTree_TreeForm(AVLTree T);
void AVLTreeInOrder(AVLTree T);
int AVLTreeInsert(AVLTree& T, ElemType e, bool* tree_is_taller);
bool AVLTreeDelete(AVLTree& T, ElemType e, bool* tree_is_lower);

void LeftTreeBalance(AVLTree &T);
void RightTreeBalance(AVLTree &T);
void R_Rotate(AVLTree& T);
void L_Rotate(AVLTree& T);
