#include"head.h"
// 顺序存储适用于完全二叉树
int main()
{
	SqBiTree T;
	printf("请输入一棵完全二叉树：");
	InitBiTree(T);
	CreateBiTree(T);
	PrintBiTree(T);
}
