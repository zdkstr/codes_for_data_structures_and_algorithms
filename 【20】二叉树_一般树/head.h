#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <Windows.h>

typedef char TreeElemType;  // 定义二叉树所存储的元素类型

typedef struct BiTNode { // 声明二叉树的结点的结构体
	TreeElemType data;
	struct BiTNode* lchild;
	struct BiTNode* rchild;
} BiTNode, * BiTree;

void InitBiTree(BiTree& T);
void CreateBiTree(BiTree& T);
void Create_Complete_Binary_Tree(BiTree& T);
void PrintBiTree_TreeForm(BiTree T);
void LevelOrder(BiTree T);
void InvertLevelOrder(BiTree T);
void PreOrder(BiTree p);
void InOrder(BiTree p);
void PostOrder(BiTree p);
int BiTreeDepth(BiTree T);







// 队列的相关声明
typedef BiTNode* QElemType;
typedef struct QNode {
	QElemType data;
	int lchild_is_visited;
	struct QNode* next;
} QNode;

typedef struct {
	QNode* front;
	QNode* rear;
} LinkQueue;
void InitQueue(LinkQueue& Q);
void EnQueue(LinkQueue& Q, QElemType e);
bool DeQueue(LinkQueue& Q, QElemType& e);
bool QueueEmpty(LinkQueue Q);
void PreNode_of_InOrder(BiTree T, BiTNode* q);




// 栈的相关声明
typedef BiTNode* SElemType;
typedef struct SNode {
	SElemType data;
	struct SNode* next;
} SNode, * LinkStack;

void InitStack(LinkStack& S);
void Push(LinkStack& S, SElemType e);
bool Pop(LinkStack& S, SElemType& e);
bool GetTop(LinkStack S, SElemType& e);
bool StackEmpty(LinkStack S);
void DestroyStack(LinkStack& S);



