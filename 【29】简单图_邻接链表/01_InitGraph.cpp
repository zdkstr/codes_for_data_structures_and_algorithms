#include"head.h"
void InitGraph(LGraph& G) {
	for (int i = 0;i<MaxVexNum;i++) {
		G.vertices[i].data = NULL;
		G.vertices[i].L = NULL;
		G.vertices[i].indegree = 0;
		G.vertices[i].outdegree = 0;
	}
	G.vexnum = G.arcnum = 0;
}
