#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>


typedef int KeyType;
typedef struct BSTNode{
	KeyType Key;
	struct BSTNode* lchild, * rchild;
}BSTNode,*BSTree;

void InitBSTree(BSTree& T);
void CreateBSTree(BSTree& T);
void PrintBSTree_TreeForm(BSTree T);
void BSTreeInOrder(BSTree T);
void BSTreeInsert(BSTree& T, KeyType x);
void BSTreeDelete(BSTree& T, KeyType k);
BSTNode* BSTSearch(BSTree T, KeyType key);
