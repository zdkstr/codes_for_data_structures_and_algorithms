#include"head.h"
// 可用于无向图中：求顶点V的出度，即有多少条指向其它顶点的弧
// 可用于有向图中：求顶点V的度，即有多少条边与其它顶点相连
int Outdegree(MGraph& G, VertexType V) {
	int i = VertexSubscript(G, V);
	if (i == -1) return 0;
	int sum = 0;
	for (int j = 0;j < G.vertexnum;j++) {
		if (G.Arc[i][j] != 0 && G.Arc[i][j] != INFINITY)
			sum++;
	}
	return sum;
}
