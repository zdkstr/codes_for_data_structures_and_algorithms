#include"head.h"

void Union(int UFSets[], int v1, int v2) {
	int root1 = FindRoot(UFSets, v1);
	int root2 = FindRoot(UFSets, v2);
	if (UFSets[root1] < UFSets[root2]) {
		UFSets[root1] = UFSets[root1] + UFSets[root2];
		UFSets[root2] = root1;
	}
	else {
		UFSets[root2] = UFSets[root2] + UFSets[root1];
		UFSets[root1] = root2;
	}
}
