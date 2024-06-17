#include"head.h"
// 打印简单图的邻接链表
void PrintGraph_AdjacencyList(LGraph &G) {
	LNode* p;
	for (int i = 0;i < G.vexnum;i++) {
		printf("%c: ", G.vertices[i].data);
		p = G.vertices[i].L;
		while (p != NULL) {
			printf("--> %c ", p->data);
			p = p->next;
		}
		printf("\n");
	}
}
