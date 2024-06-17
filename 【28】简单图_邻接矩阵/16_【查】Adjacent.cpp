#include"head.h"
// 判断两个顶点是否相邻，即两个顶点之间是否存在弧
void Adjacent(MGraph &G, VertexType V1, VertexType V2) {
	if (V1 == V2)
		return ;
	int i = VertexSubscript(G, V1);
	int j = VertexSubscript(G, V2);
	if (i == -1 || j == -1)
		return;
	if (G.Arc[i][j] == INFINITY ) 
		printf("没有由顶点%c指向顶点%c的弧\n", V1, V2);
	else 
		printf("存在由顶点%c指向顶点%c的弧\n", V1, V2);	
	
	if (G.Arc[j][i] == INFINITY ) 
		printf("没有由顶点%c指向顶点%c的弧\n", V2, V1);
	else
		printf("存在由顶点%c指向顶点%c的弧\n", V2, V1);
}
