#include"head.h"
//S(n)=O(|V|);T(n)=O(|V|*|V|)
int time=0;
bool vertex_visited[MaxVertexNum];
int Activity_ReverseOrder[MaxVertexNum];
void Topo_DFS(MGraph &G, int i) {
	vertex_visited[i] = true;
	for (int j = FirstNeighbor(G, i);j >= 0;j = NextNeighbor(G, i, j))
		if (!vertex_visited[j])
			Topo_DFS(G, j);
	//深度遍历往回向上一层逆向递归时，将顶点标注在活动数组中
	Activity_ReverseOrder[time++] = i;
}
void Topo_DFSTraverse(MGraph &G) {
	//用数组标注顶点的访问情况
	for (int i = 0;i < G.vertexnum;i++)
		vertex_visited[i] = false;
	//默认i=0对应源点，进行深度遍历
	for (int i = 0;i < G.vertexnum;i++)
		if (!vertex_visited[i])
			Topo_DFS(G, i);
	VertexType V;int i;
	for (int j = G.vertexnum-1;j>=0 ;j--) {
		i = Activity_ReverseOrder[j];
		V = G.Vertex[i];
		putchar(V);
	}
	printf("\n");
}
