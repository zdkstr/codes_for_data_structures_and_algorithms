#include"head.h"
// 添加顶点
bool InsertVertex(MGraph &G, VertexType V) {
	if (G.vertexnum >= MaxVertexNum) 
		return false;
	G.Vertex[G.vertexnum] = V;
	G.vertexnum=G.vertexnum + 1;
	return true;
}
