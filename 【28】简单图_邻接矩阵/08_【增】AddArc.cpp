#include"head.h"
// 添加一条弧
bool AddArc(MGraph& G, VertexType V1, VertexType V2,int info) {
	int i = VertexSubscript(G, V1);
	int j = VertexSubscript(G, V2);
	if (i == -1 || j == -1)
		return false;
	G.Arc[i][j] = info;
	G.arcnum = G.arcnum + 1;
	return true;
}
