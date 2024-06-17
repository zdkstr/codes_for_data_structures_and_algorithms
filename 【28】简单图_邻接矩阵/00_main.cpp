#include"head.h"
// 在线创造图的网站https://graphonline.ru/ch/
int main()
{
	MGraph G;
	InitGraph(G);
	//CreateGraph_Directed(G);
	CreateGraph_Undirected(G);
	printf("打印简单图的邻接矩阵：\n");PrintGraph_MatrixForm(G);
	printf("打印宽度优先遍历序列：");PrintGraph_BFSTraverse(G);
	printf("打印深度优先遍历序列：");PrintGraph_DFSTraverse(G);
	Outdegree(G,'a');
	Indegree(G,'a');
	Neighbors(G,'a');
	Adjacent(G,'a','b');
	
}
