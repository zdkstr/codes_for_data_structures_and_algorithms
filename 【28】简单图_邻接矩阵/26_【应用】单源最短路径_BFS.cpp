#include"head.h"
//所有边的权值视为1;T(n)=O(|V|∙|V|)
typedef struct {
	int path;
	int distance;
}ToVertex;
//用结构体数组保存源点到目标点之间的距离和中转点
ToVertex To_vertex[MaxVertexNum];
//广度优先遍历实现无权图的单源最短路径
void BFS_Min_Distance(MGraph &G, VertexType source_vertex) {
	int v = VertexSubscript(G, source_vertex);
	bool vertex_is_visited[MaxVertexNum];
	for (int i = 0;i < G.vertexnum;i++) {
		vertex_is_visited[i] = false;
		To_vertex[i].distance = INFINITY;
		To_vertex[i].path = -1;
	}
	vertex_is_visited[v] = true;
	To_vertex[v].distance = 0;
	SqQueue Q;InitQueue(Q);
	EnQueue(Q, v);
	while (!QueueEmpty(Q)) {
		DeQueue(Q, v);
		for (int w = FirstNeighbor(G, v);w >= 0;w = NextNeighbor(G, v, w)) {
			if (!vertex_is_visited[w]) {
				vertex_is_visited[w] = true;
				To_vertex[w].distance = To_vertex[v].distance + 1;
				To_vertex[w].path = v;
				EnQueue(Q, w);
			}
		}
	}
}
