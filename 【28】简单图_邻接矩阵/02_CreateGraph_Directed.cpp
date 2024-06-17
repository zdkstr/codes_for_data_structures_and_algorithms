#include"head.h"
// 创建有向图
void CreateGraph_Directed(MGraph& G) {
	int i = 0,j=0,info=0;
	
	printf("请按序输入包含所有顶点的字符串：");
	for (VertexType V;scanf("%c", &V) != EOF && V != '\n';i++) {
		G.Vertex[i] = V;
		G.vertexnum++;
	}
	
	printf("请输入存在的弧及权重(如: ac 88 ca 66 回车)：");
	for (VertexType V;scanf("%c", &V) != EOF && V != '\n';i++) {
		i = VertexSubscript(G, V);
		scanf("%c", &V);
		j = VertexSubscript(G, V);
		scanf("%d", &info);
		getchar();
		G.Arc[i][j] = info;
		G.arcnum++;
	}
}
