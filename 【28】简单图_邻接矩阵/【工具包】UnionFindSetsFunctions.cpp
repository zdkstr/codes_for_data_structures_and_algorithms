#include"head.h"

void InitUFSets(int UFSets[]) {
	for (int i = 0;i < MaxSize;i++)
		UFSets[i] = -1;
}
int FindRoot(int FatherOf[], int x) {
	int node_x = x;
	while (FatherOf[node_x] >= 0)
		node_x = FatherOf[node_x];
	int root = node_x;
	while (x != root) {
		node_x = FatherOf[x];
		FatherOf[x] = root;
		x = node_x;
	}
	return root;
}
void Union(int UFSets[], int v1, int v2) {
	int root1 = FindRoot(UFSets, v1);
	int root2 = FindRoot(UFSets, v2);
	if (UFSets[root2] > UFSets[root1]) {
		UFSets[root1] = UFSets[root1] + UFSets[root2];
		UFSets[root2] = root1;
	}
	else {
		UFSets[root2] = UFSets[root2] + UFSets[root1];
		UFSets[root1] = root2;
	}
}
