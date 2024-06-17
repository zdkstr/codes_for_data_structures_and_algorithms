#include"head.h"
//S(n)=O(|V|);T(n)=O(|V|*|V|)
bool vertex_Is_visited[MaxVertexNum];
SqQueue Q;

void BFS(MGraph &G, int i) {
	printf("%2c", G.Vertex[i]);
	vertex_Is_visited[i]=true;
	EnQueue(Q,i);
	while (!QueueEmpty(Q)) {
		DeQueue(Q, i);
		for (int j = FirstNeighbor(G, i);j >= 0;j = NextNeighbor(G, i, j)) {
			if (!vertex_Is_visited[j]) {
				printf("%2c", G.Vertex[j]);
				vertex_Is_visited[j] = true;
				EnQueue(Q, j);
			}
		}
	}
}

// 广度优先遍历
void PrintGraph_BFSTraverse(MGraph &G) {
	for (int i = 0;i < G.vertexnum;i++)
		vertex_Is_visited[i] = false;
	InitQueue(Q);
	for (int i = 0;i < G.vertexnum;i++)
		if (!vertex_Is_visited[i])
			BFS(G, i);
	printf("\n");
}
