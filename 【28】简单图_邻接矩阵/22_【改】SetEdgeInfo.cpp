#include"head.h"
// 修改一条边的权重
bool SetEdgeInfo(MGraph& G, VertexType V1, VertexType V2,int info) {
	int i = VertexSubscript(G, V1);
	int j = VertexSubscript(G, V2);
	if (i == -1 || j == -1) return false;
	G.Arc[i][j] = info;
	G.Arc[j][i] = info;
	return true;
}
