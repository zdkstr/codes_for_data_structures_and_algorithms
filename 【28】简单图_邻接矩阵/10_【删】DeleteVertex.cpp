#include"head.h"
// T(n)=O(|V|);S(n)=O(1);
void DeleteVertex(MGraph& G, VertexType V) {
	int i = VertexSubscript(G, V);
	if (i == -1) return;
	int k = G.vertexnum - 1;
	int degree = Indegree(G, V) + Outdegree(G, V);
	for (int j = 0;j < G.vertexnum;j++) {
		G.Arc[i][j] = G.Arc[k][j];
		if (j == k)
			G.Arc[k][j] = 0;
		else
			G.Arc[k][j] = INFINITY;
	}
	int j = i;
	for (int i = 0;i < G.vertexnum;i++) {
		G.Arc[i][j] = G.Arc[i][k];
		if (i == k)
			G.Arc[i][k] = 0;
		else
			G.Arc[i][k] = INFINITY;
	}
	G.Vertex[j] = G.Vertex[k];
	G.Vertex[k] = NULL;
	G.vertexnum = G.vertexnum - 1;
	G.arcnum = G.arcnum - degree;
}
