#include"head.h"
//S(n)=O(|V|);T(n)=O(|V|+|E|);
bool vertex_is_Visited[MaxVexNum];
void DFS(LGraph &G, VertexType V) {
	printf("%c ",V);
	int i=VertexSubscript(G,V);
	vertex_is_Visited[i] = true;
	LinkList L=G.vertices[i].L;
	for (LNode* p = L;p!=NULL;p=p->next){
		int j=VertexSubscript(G,p->data);
		if (!vertex_is_Visited[j])
			DFS(G, p->data);
	}
}

// 打印简单图的深度优先遍历序列
void PrintfGraph_DFSTraverse(LGraph &G,VertexType V) {
	int i=VertexSubscript(G,V);
	if(i==-1) return;
	for (int v = 0;v < G.vexnum;v++)
		vertex_is_Visited[i] = false;
	DFS(G,V);                           // 从顶点V开始进行遍历
	for (int j = 0;j< G.vexnum;j++)     // 查漏补缺
		if (!vertex_is_Visited[j])
			DFS(G,G.vertices[j].data);
	printf("\n");
}
