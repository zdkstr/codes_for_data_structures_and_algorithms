#include"head.h"
bool RemoveArc(MGraph& G, VertexType V1, VertexType V2) {
	int i = VertexSubscript(G, V1);
	int j = VertexSubscript(G, V2);
	if (i == -1 || j == -1)
		return false;
	G.Arc[i][j] = INFINITY;
	G.arcnum = G.arcnum - 1;
	return true;
}
