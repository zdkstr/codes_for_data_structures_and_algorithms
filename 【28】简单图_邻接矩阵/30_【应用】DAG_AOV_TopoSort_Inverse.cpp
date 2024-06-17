#include"head.h"
bool InverseTopologicalSort(MGraph& G) {
	int outdegree_of_vertex[MaxVertexNum];
	int ActivityReverseOrder[MaxVertexNum];
	for (int i = 0;i < G.vertexnum;i++) {
		int k = 0;
		for (int j = 0;j < G.vertexnum;j++) {
			if (G.Arc[i][j] != 0 && G.Arc[i][j] != INFINITY)
				k++;
		}
		outdegree_of_vertex[i] = k;
	}
	SqStack S;InitStack(S);
	for (int i = 0;i < G.vertexnum;i++)
		if (outdegree_of_vertex[i] == 0)
			Push(S, i);
	int count = 0;
	while (!StackEmpty(S)) {
		int j;
		Pop(S, j);
		ActivityReverseOrder[count++] = j;
		for (int i = 0;i < G.vertexnum;i++) {
			if (G.Arc[i][j] != 0 && G.Arc[i][j] != INFINITY) {
				outdegree_of_vertex[i]--;
				if (outdegree_of_vertex[i] == 0)
					Push(S, i);
			}
		}
	}
	if (count < G.vertexnum)
		return false;//不是有向无环图，返回false
	else {
		VertexType V;int i;
		for (int j = 0;j < G.vertexnum;j++) {
			i = ActivityReverseOrder[j];
			V = G.Vertex[i];
			putchar(V);
		}
		printf("\n");
		return true;
	}
}
