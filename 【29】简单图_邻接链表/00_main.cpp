#include"head.h"

int main(){
	LGraph G;
	InitGraph(G);
	CreateGraph_Directed(G);
	PrintGraph_AdjacencyList(G);
	PrintGraph_BFSTraverse(G,'b');
	PrintfGraph_DFSTraverse(G,'a');
	
	return 0;
}
	
