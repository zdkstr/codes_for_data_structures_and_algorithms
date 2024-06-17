#include"head.h"
//T(n)=O(|V|^3);������ֵ
void Floyd(MGraph& G) {
	int A[MaxVertexNum][MaxVertexNum];
	int path[MaxVertexNum][MaxVertexNum];
	for (int i = 0;i < G.vertexnum;i++) 
		for (int j = 0;j < G.vertexnum;j++) {
			A[i][j] = G.Arc[i][j];
			path[i][j] = -1;
		}
	for(int k=0;k<G.vertexnum;k++)
		for (int i = 0;i < G.vertexnum;i++)
			for (int j = 0;j < G.vertexnum;j++) {
				if (A[i][j] > A[i][k] + A[k][j]) {
					A[i][j] = A[i][k] + A[k][j];
					path[i][j] = k;
				}
			}
}
