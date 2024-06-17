#include"head.h"
// 可用于无向图中：求顶点V的入度，即有多少条指向顶点V的弧
// 可用于有向图中：求顶点V的度，即有多少条边与顶点V相连
int Indegree(MGraph& G, VertexType V) {
	int i = VertexSubscript(G, V);
	if (i == -1) return 0;
	int sum=0;
	for (int j = 0;j < G.vertexnum;j++) {
		if (G.Arc[j][i] != 0 && G.Arc[j][i] != INFINITY)
			sum++;
	}
	return sum;
}
