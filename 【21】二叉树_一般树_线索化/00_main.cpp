#include"head.h"
int main()
{
	BiTree T;
	printf("请输入一般二叉树的层次遍历序列：");InitBiTree(T);CreateBiTree(T);
	printf("打印二叉树的树形结构：");PrintBiTree_TreeForm(T);
	printf("先序线索化并打印先序序列：");PreThread(T);PrintBiTree_PreOrder(T);
	printf("打印逆向的先序序列：");PrintBiTree_InvertPreOrder(T);
	//printf("中序线索化并打印中序序列：");InThread(T);PrintBiTree_InOrder(T);
	//printf("打印逆向的中序序列：");PrintBiTree_InvertInOrder(T);
	//printf("后序线索化并打印后序序列：");PostThread(T);PrintBiTree_PostOrder(T);
	//printf("打印逆向的后序序列：");PrintBiTree_InvertPostOrder(T);
	
	return 0;
	

} 
