#include"head.h"

int main() {
	int root;
	int UFSets[MaxSize];  // 定义一个数组，改造成并查集
	
	printf("初始化并查集...\n");InitUFSets(UFSets);
	
	root=FindRoot(UFSets, 0);  
	printf("0号结点所在树的根结点为%d号\n",root);
	
	printf("将0号结点和9号结点所在的两棵树合并为一棵树....\n");
	Union(UFSets, 0, 9);
	
	root=FindRoot(UFSets, 0);  
	printf("0号结点所在树的根结点为%d号\n",root);
}
