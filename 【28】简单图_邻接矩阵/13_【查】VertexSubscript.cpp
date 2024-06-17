#include "head.h"
// 查询顶点在一维数组中对应的下标
int VertexSubscript(MGraph &G, VertexType V) {
	for (int i = 0;i < G.vertexnum;i++)
		if (G.Vertex[i] == V)
			return i;
	return -1;
}
