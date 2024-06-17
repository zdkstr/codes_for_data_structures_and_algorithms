#include"head.h"
// 求与顶点V相联系的顶点
void Neighbors(MGraph &G, VertexType V) {
	int i = VertexSubscript(G, V);
	if (i == -1) return;
	printf("顶点%c有弧指向这些顶点：", G.Vertex[i]);
	for (int j = 0;j < G.vertexnum;j++) {
		if (G.Arc[i][j] != 0 && G.Arc[i][j] != INFINITY)
			printf("%3c", G.Vertex[j]);
	}
	printf("\n");
	printf("这些顶点有弧指向顶点%c：", G.Vertex[i]);
	for (int j = 0;j < G.vertexnum;j++) {
		if (G.Arc[j][i] != 0 && G.Arc[j][i] != INFINITY)
			printf("%3c", G.Vertex[j]);
	}
	printf("\n");
}
