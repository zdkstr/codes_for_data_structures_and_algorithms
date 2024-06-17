#include"head.h"
//S(n)=O(|V|);T(n)=O(|V|+|E|);
SqQueue Q;
bool vertex_Is_visited[MaxVexNum];
void BFS(LGraph &G, VertexType V) {
	printf("%c ", V);
	int i=VertexSubscript(G,V);
	vertex_Is_visited[i] = true;
	EnQueue(Q, V);
	LinkList L=G.vertices[i].L;
	while (!QueueEmpty(Q)) {
		DeQueue(Q, V);
		for(LNode* p=L;p!=NULL;p=p->next){
			int j=VertexSubscript(G,p->data);
			if (!vertex_Is_visited[j]) {
				printf("%c ", p->data);
				vertex_Is_visited[j] = true;
				EnQueue(Q, p->data);
			}
		}
	}
}

// 打印简单图的宽度优先遍历序列
void PrintGraph_BFSTraverse(LGraph &G,VertexType V) {
	int i=VertexSubscript(G,V);
	if(i==-1) return;
	for (int i = 0;i < G.vexnum;i++)
		vertex_Is_visited[i] = false;
	InitQueue(Q);
	BFS(G,V);                          // 从顶点V开始进行遍历
	for (int i = 0;i < G.vexnum;i++)   // 查漏补缺
		if (!vertex_Is_visited[i])
			BFS(G, G.vertices[i].data);
	printf("\n");
}
