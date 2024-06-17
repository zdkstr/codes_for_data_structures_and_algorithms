#include"head.h"
int main() {
	RBTree T;                  // 定义指向一棵红黑树的指针
	RBNode null_node;          // 定义红黑树的空结点
	InitRBTree(T,null_node);
	printf("请输入数列(9999回车结束)：");CreateRBTree(T,&null_node);
	printf("打印相应红黑树的树形结构：");PrintRBTree_TreeForm(T,&null_node);
	printf("插入一个元素并打印红黑树：");RBTreeInsert(T,888,&null_node);PrintRBTree_TreeForm(T,&null_node);
	printf("删除一个元素并打印红黑树：");RBTreeDelete(T,888,&null_node);PrintRBTree_TreeForm(T,&null_node);

	return 0;
}
