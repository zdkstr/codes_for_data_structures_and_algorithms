#include"head.h"
// 无向图的边相当于有向图的两条弧
bool AddEdge(MGraph& G, VertexType V1, VertexType V2, int info) {
	int i = VertexSubscript(G, V1);
	int j = VertexSubscript(G, V2);
	if (i == -1 || j == -1)
		return false;
	G.Arc[i][j] = info;
	G.Arc[j][i] = info;
	G.arcnum = G.arcnum + 2;
	return true;
}
