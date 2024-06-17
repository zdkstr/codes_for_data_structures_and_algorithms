#include"head.h"
//S(n)=O(|V|);T(n)=O(|V|∙|V|)
//带负权值的不适用
typedef struct {
	int distance;
	int transition;
}Information_To_Vertex;
//实现正权图的单源最短路径
void Dijkstra(MGraph& G, VertexType source_vertex) {
	int v = VertexSubscript(G, source_vertex);
	Information_To_Vertex source_To_vertex[MaxVertexNum];
	bool min_distance_of_vertex_is_finished[MaxVertexNum];
	for (int i = 0;i < G.vertexnum;i++) {
		min_distance_of_vertex_is_finished[i] = false;
		source_To_vertex[i].distance = INFINITY;
		source_To_vertex[i].transition = -1;
	}
	source_To_vertex[v].distance = 0;
	min_distance_of_vertex_is_finished[v] = true;
	while (v!=-1) {
		//从当前结点出发，尝试缩短当前结点到其它未确定结点的距离
		for (int w = FirstNeighbor(G, v);w >= 0;w = NextNeighbor(G, v, w)) {
			if (!min_distance_of_vertex_is_finished[w]) {
				if (source_To_vertex[v].distance + G.Arc[v][w] < source_To_vertex[w].distance) {
					source_To_vertex[w].distance = source_To_vertex[v].distance+ G.Arc[v][w];
					source_To_vertex[w].transition = v;
				}
			}
		}
		//查找当前距离最近的未确定结点
		int min_distance = INFINITY;
		for (int i = 0;i < G.vertexnum;i++) {
			if (!min_distance_of_vertex_is_finished[i] && source_To_vertex[i].distance < min_distance) {
				min_distance = source_To_vertex[i].distance;
				v = i;
			}
		}
		//源点到该结点的最小距离被确定
		if (min_distance != INFINITY)
			min_distance_of_vertex_is_finished[v] = true;
		else
			v = -1;
	}
	
}
