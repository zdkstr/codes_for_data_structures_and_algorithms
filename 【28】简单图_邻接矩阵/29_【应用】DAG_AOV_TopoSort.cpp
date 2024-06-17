#include"head.h"
//T(n)=O(|V|^2);
//int VertexOrder[MaxVertexNum];
bool TopologicalSort(MGraph& G, int VertexOrder[]) {
	// 获取顶点的入度情况
	int indegree_of_vertex[MaxVertexNum];
	for (int j = 0;j < G.vertexnum;j++) {
		int k=0;
		for (int i = 0;i < G.vertexnum;i++) {
			if (G.Arc[i][j] != 0 && G.Arc[i][j] != INFINITY)
				k++;
		}
		indegree_of_vertex[j] = k;
	}

	//查找入度为0的顶点，将之存入栈中
	SqStack S;InitStack(S);
	for (int i = 0;i < G.vertexnum;i++)
		if (indegree_of_vertex[i] == 0)
			Push(S, i);

	int count = 0;
	while (!StackEmpty(S)) {
		int i;
		Pop(S, i);
		//将选中的顶点标记在活动队列中
		VertexOrder[count++] = i;
		//图中与之相邻的顶点的入度都要减1，入度变为0的存入栈中
		for (int k = 0;k < G.vertexnum;k++) {
			if (G.Arc[i][k] != 0 && G.Arc[i][k] != INFINITY) {
				indegree_of_vertex[k]--;
				if (indegree_of_vertex[k] == 0)
					Push(S, k);
			}
		}
	}
	//不是有向无环图，返回false
	if (count < G.vertexnum)
		return false;
	else {
		VertexType V;int i;
		for (int j = 0;j < G.vertexnum;j++) {
			i = VertexOrder[j];
			V = G.Vertex[i];
			putchar(V);
		}
		printf("\n");
		return true;
	}
}
