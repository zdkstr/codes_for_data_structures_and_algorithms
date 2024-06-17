#include"head.h"
int main()
{
	BiTree T;
	printf("请输入一般二叉树的层次遍历序列：");InitBiTree(T);CreateBiTree(T);
	printf("打印二叉树的树形结构：");PrintBiTree_TreeForm(T);
	printf("打印层次遍历的结果：");LevelOrder(T);
	printf("打印逆向层次遍历的结果：");InvertLevelOrder(T);
	printf("打印先序遍历的结果：");PreOrder(T);
	printf("打印中序遍历的结果：");InOrder(T);
	printf("打印后序遍历的结果：");PostOrder(T);
	printf("查询二叉树的深度：");int depth=BiTreeDepth(T);printf("%d\n",depth);
	
	return 0;
	

} 
