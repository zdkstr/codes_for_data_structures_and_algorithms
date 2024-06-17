#include"head.h"
// 可用于有向图：求一条弧的权重
// 可用于无向图：求一条边的权重
int GetArcInfo(MGraph& G, VertexType V1, VertexType V2) {
	int i = VertexSubscript(G, V1);
	int j = VertexSubscript(G, V2);
	return G.Arc[i][j];
}

