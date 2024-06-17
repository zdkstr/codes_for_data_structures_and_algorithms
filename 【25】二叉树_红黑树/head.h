#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include <Windows.h>

typedef enum ColorType { R, B } COLOR;  // 颜色类型
typedef enum StateType {LL,LR,RR,RL} STATE;  // 位置类型
typedef enum ColorState { RBB, BRN, BXR, BNN,BNR, BRX,} COLORSTATE;  // 状态类型

#define datatype int 

typedef int Status;

typedef struct RBNode{
	COLOR color;
	datatype data;
	struct RBNode* parent;
	struct RBNode* lchild, * rchild;
}RBNode,*RBTree;

void InitRBTree(RBTree& T, RBNode& null_node);
void CreateRBTree(RBTree& T, RBNode* p_null_node);
void RightRotate(RBNode*& psource);
void LeftRotate(RBNode*& psource);
RBNode* Insert(RBTree& T, datatype e, RBNode* p_null_node);
void InsertFixup(RBTree& T, RBNode* pnew);
void RBTreeInsert(RBTree& T, datatype e, RBNode* p_null_node);
void RBTreeDelete(RBTree& T, datatype e, RBNode* p_null_node);
void PrintRBTree_TreeForm(RBTree T,RBNode *p_null_node);

