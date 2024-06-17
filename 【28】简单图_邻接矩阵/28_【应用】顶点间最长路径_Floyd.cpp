#include"head.h"
// 将最长路径问题转化为最短路径问题
void Max_Distance_Floyd(MGraph& G) {
	int A[MaxVertexNum][MaxVertexNum];
	int path[MaxVertexNum][MaxVertexNum];
	for (int i = 0;i < G.vertexnum;i++)
		for (int j = 0;j < G.vertexnum;j++) {
			if(G.Arc[i][j]!=0&& G.Arc[i][j]!=INFINITY)
				A[i][j] = -G.Arc[i][j];
			else 
				A[i][j] = G.Arc[i][j];
			path[i][j] = -1;
		}
	for (int k = 0;k < G.vertexnum;k++)
		for (int i = 0;i < G.vertexnum;i++)
			for (int j = 0;j < G.vertexnum;j++) {
				if (A[i][k] + A[k][j] <=0 && A[i][j] > A[i][k] + A[k][j]) {
					A[i][j] = A[i][k] + A[k][j];
					path[i][j] = k;
				}
			}
	for (int i = 0;i < G.vertexnum;i++)
		for (int j = 0;j < G.vertexnum;j++) {
			if (A[i][j] != 0 && A[i][j] != INFINITY) 
				A[i][j] = -A[i][j];
		}
}
