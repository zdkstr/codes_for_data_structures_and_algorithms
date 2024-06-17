#include"head.h"
//查找树(排序树)的中序序列为严格单调的序列，没有相同的数据
int main() {
	BSTree T;InitBSTree(T);
	printf("请输入数列(9999回车结束)：");CreateBSTree(T);
	printf("打印相应查找树的树形结构：");PrintBSTree_TreeForm(T);
	printf("输出相应查找树的中序序列：");BSTreeInOrder(T);putchar('\n');
	printf("插入一个元素并打印结果：");BSTreeInsert(T,888);PrintBSTree_TreeForm(T);
	printf("删除一个元素并打印结果：");BSTreeDelete(T,888);PrintBSTree_TreeForm(T);
}
