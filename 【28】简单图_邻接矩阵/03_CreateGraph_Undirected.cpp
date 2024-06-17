#include"head.h"
// 创建无向图,无向图的边相当于有向图的两条弧
void CreateGraph_Undirected(MGraph& G) {
	int i = 0,j=0,info=0;
	
	printf("请按序输入包含所有顶点的字符串：");
	for (VertexType V;scanf("%c", &V) != EOF && V != '\n';i++) {
		G.Vertex[i] = V;
		G.vertexnum++;
	}
	
	printf("请输入存在的边及权重(如: ac 88 ab 66 回车)：");
	for (VertexType V;scanf("%c", &V) != EOF && V != '\n';i++) {
		i = VertexSubscript(G, V);
		scanf("%c", &V);
		j = VertexSubscript(G, V);
		scanf("%d", &info);
		getchar();
		G.Arc[i][j] = info;
		G.Arc[j][i] = info;
		G.arcnum++;
	}
}
