#include"head.h"

int FindRoot(int UFSets[], int x) {   // 查找下标为x的结点的所在树的根结点
	int temp = x;
	while (UFSets[temp] >= 0)
		temp = UFSets[temp];
	int root = temp;
	while (x != root) {     // 将查找路径上的所有结点的双亲更改为根结点
		temp = UFSets[x];
		UFSets[x] = root;
		x = temp;
	} 
	return root;
}
