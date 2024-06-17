#include"head.h"
// 可用于有向图或无向图
int FirstNeighbor(MGraph G, int i) {
	for (int j = 0;j < G.vertexnum;j++) {
		if (G.Arc[i][j] != 0 && G.Arc[i][j] != INFINITY)
			return j;
	}
	return -1;
}

// 求顶点V所指向的第一个顶点
//VertexType FirstNeighbor(MGraph &G, VertexType V) {
//	int i = VertexSubscript(G, V);
//	for (int j = 0;j < G.vertexnum;j++) {
//		if (G.Arc[i][j] != 0 && G.Arc[i][j] != INFINITY)
//			return G.Vertex[j];
//	}
//	return NULL;
//}
