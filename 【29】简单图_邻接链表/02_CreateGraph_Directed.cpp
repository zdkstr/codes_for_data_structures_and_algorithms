#include"head.h"
void CreateGraph_Directed(LGraph& G) {
	LNode* pnew; int i=0,j=0,info=0;
	
	printf("请按序输入包含所有顶点的字符串：");
	for (VertexType V;scanf("%c", &V) != EOF && V != '\n';i++) {
		G.vertices[i].data = V;
		G.vexnum++;
	}
	
	printf("请输入存在的弧及权重(如: ac 88 ca 66 回车)：");
	for (VertexType V;scanf("%c", &V) != EOF && V != '\n';) {
		i = VertexSubscript(G, V);
		scanf("%c", &V);
		j = VertexSubscript(G, V);
		scanf("%d", &info);
		getchar();  // 清理控制台缓存中的空格 
		pnew = (LNode*)malloc(sizeof(LNode));
		pnew->data = V;
		pnew->info = info;
		pnew->next = G.vertices[i].L;  // 头插法
		G.vertices[i].L = pnew;
		G.arcnum++;
		G.vertices[i].outdegree++;
		G.vertices[j].indegree++;
	}
}
