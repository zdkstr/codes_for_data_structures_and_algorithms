#include"head.h"
//S(n)=O(|V|);T(n)=O(|V|*|V|)
bool Is_Visited[MaxVertexNum];

void DFS(MGraph &G, int i) {
	printf("%2c", G.Vertex[i]);
	Is_Visited[i] = true;
	for (int j = FirstNeighbor(G, i);j >= 0;j = NextNeighbor(G, i, j))
		if (!Is_Visited[j])
			DFS(G, j);
}
void PrintGraph_DFSTraverse(MGraph &G) {
	for (int i = 0;i < G.vertexnum;i++)
		Is_Visited[i] = false;
	for (int i = 0;i < G.vertexnum;i++)
		if (!Is_Visited[i])
			DFS(G, i);
	printf("\n");
}
