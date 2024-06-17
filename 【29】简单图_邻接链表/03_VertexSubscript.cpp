#include "head.h"
// 获取顶点V在数组中的下标
int VertexSubscript(LGraph& G, VertexType V) {
	for (int i = 0;i < G.vexnum;i++)
		if (G.vertices[i].data == V)
			return i;
	return -1;
}
