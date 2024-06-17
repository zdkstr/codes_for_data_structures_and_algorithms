#include"head.h"
// 从某一顶点开始构造最小生成树,S(n)=O(|V|);T(n)=O(|V|*|V|);
typedef struct {
	int contact;
	int distance;
}Node;

void Prim(MGraph &G,MGraph &T, VertexType V) {  // 从任意一顶点开始构造最小生成树
	// 用邻接表实现的图T存储最小生成树
	for (int i = 0;i < G.vertexnum;i++) {
		T.Vertex[i] = G.Vertex[i];
		T.vertexnum = T.vertexnum + 1;
	}
	int k = VertexSubscript(G, V);
	// 用一个数组存储各顶点是否已加入最小生成树的状态
	bool vertex_has_joined_MST[MaxVertexNum];
	for (int i = 0;i < G.vertexnum;i++)
		vertex_has_joined_MST[i] = false;
	vertex_has_joined_MST[k] = true;
	// 用结构体数组存储各顶点到最小生成树的最短距离及相应的联接顶点
	Node MST_and_vertex[MaxVertexNum];
	for (int j = 0;j < G.vertexnum;j++) {
		MST_and_vertex[j].distance = G.Arc[k][j];
		MST_and_vertex[j].contact = k;
	}
	//
	while (1) {
		int min_distance = INFINITY;int new_v;
		// 查找距离最小生成树最近的游离顶点
		for (int j = 0;j < G.vertexnum;j++) {
			if(!vertex_has_joined_MST[j])
				if (MST_and_vertex[j].distance < min_distance) {
					min_distance = MST_and_vertex[j].distance;
					new_v = j;
				}
		}
		// 未找到距离最小的顶点
		if (min_distance == INFINITY) return;
		// 更新顶点的加入状态
		vertex_has_joined_MST[new_v] = true;
		// 将联接顶点与新加入顶点之间的距离保存到图T中
		k = MST_and_vertex[new_v].contact;
		AddEdge(T, G.Vertex[k], G.Vertex[new_v], min_distance);
		// 依据新加入顶点到各游离顶点的距离，更新最小生成树到各游离顶点之间的最小距离
		for (int j = 0;j < G.vertexnum ;j++) {  
			if(!vertex_has_joined_MST[j])
				if (MST_and_vertex[j].distance > G.Arc[new_v][j]) {
					MST_and_vertex[j].distance = G.Arc[new_v][j];
					MST_and_vertex[j].contact = new_v;
				}
		}
	}
}
