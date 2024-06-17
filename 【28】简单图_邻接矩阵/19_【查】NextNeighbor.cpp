#include"head.h"
// 可用于有向图或无向图
int NextNeighbor(MGraph G, int v, int w) {
	for (int j = w+1;j < G.vertexnum;j++) {
		if (G.Arc[v][j] != 0 && G.Arc[v][j] != INFINITY)
			return j;
	}
	return -1;
}

////顶点V2是顶点V1的一个邻接点，求顶点V1的别的邻接点
//VertexType NextNeighbor(MGraph G, VertexType V1, VertexType V2) {
//	int i= VertexSubscript(G, V1);
//	int k= VertexSubscript(G, V2);
//	for (int j = k + 1;j < G.vertexnum;j++) {
//		if (G.Arc[i][j] != 0 && G.Arc[i][j] != INFINITY)
//			return G.Vertex[j];
//	}
//	return NULL;
//}
