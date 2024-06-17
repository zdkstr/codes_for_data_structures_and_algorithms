#include"head.h"
void InitGraph(MGraph& G) {
	for (int i = 0;i < MaxVertexNum;i++) {
		G.Vertex[i] = NULL;
		for (int j = 0;j < MaxVertexNum;j++) {
			if (i == j)
				G.Arc[i][j] = 0;         // 表示顶点跟自身的距离为0
			else
				G.Arc[i][j] = INFINITY;  // INFINITY表示两顶点之间无连线,距离无穷
		}
	}
	G.vertexnum = G.arcnum = 0;
}
