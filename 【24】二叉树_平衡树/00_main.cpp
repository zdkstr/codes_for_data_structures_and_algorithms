#include "head.h"
//平衡树的中序序列为严格单调的序列，没有相同的数据
int main()
{
    AVLTree T;bool flag=false,tag=false;
    InitAVLTree(T);
	printf("请输入数列(9999回车结束)：");CreateAVLTree(T);
	printf("打印相应平衡树的树形结构：");PrintAVLTree_TreeForm(T);
	printf("打印相应平衡树的中序序列：");AVLTreeInOrder(T);putchar('\n');
	printf("插入一个元素并打印结果：");AVLTreeInsert(T,888,&flag);PrintAVLTree_TreeForm(T);
	printf("删除一个元素并打印结果：");AVLTreeDelete(T,888,&tag);PrintAVLTree_TreeForm(T);
}
