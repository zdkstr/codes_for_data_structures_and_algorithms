#include"head.h"
//S(n)=O(|E|);T(n)=O(|E|∙log_2_|E|)
typedef struct LNode {
	int info;
	int v1;
	int v2; 
	struct LNode* next;
}*LinkList,LNode;
void Kruskal(MGraph& G, MGraph& T) {
	//用图T保存最小生成树
	for (int i = 0;i < G.vertexnum;i++) {
		T.Vertex[i] = G.Vertex[i];
		T.vertexnum = T.vertexnum + 1;
	}
	//用并查集来表示各条边的归属
	int UFSets[MaxSize];
	InitUFSets(UFSets);

	//用带头结点的链表L存储图中的边
	LinkList L = (LinkList)malloc(sizeof(LNode));L->next = NULL;
	//遍历邻接矩阵，将边存入链表L并排序
	for(int i=0;i<G.vertexnum;i++)
		for (int j = 0;j < G.vertexnum;j++) 
			if (G.Arc[i][j] != 0 && G.Arc[i][j] != INFINITY&&i<=j) {
				//申请新的链表结点保存图的边
				LNode* pnew = (LNode*)malloc(sizeof(LNode));
				pnew->info = G.Arc[i][j];
				pnew->v1 = i;
				pnew->v2 = j;

				LNode* pre = L, *p = L->next;
				int tag = 0;
				//若链表L为空，则直接将新的链表结点插入链表L
				if (p == NULL) {
					pnew->next = NULL;
					pre->next = pnew;
					tag = 1;
				}
				else
					while (p != NULL&&tag==0) {
						if (pnew->info < p->info) {
							pnew->next = pre->next;
							pre->next = pnew;
							tag = 1;
						}
						pre = p;
						p = p->next;
					}
				if (tag == 0) {
					pnew->next = pre->next;
					pre->next = pnew;
				}
			}
	//遍历链表L，依次将边加入最小生成树，并保存到图T
	LNode* p = L->next;
	while (p != NULL) {
		int i= FindRoot(UFSets, p->v1);
		int j= FindRoot(UFSets, p->v2);
		if (i != j) {
			Union(UFSets, p->v1, p->v2);
			AddEdge(T, G.Vertex[p->v1], G.Vertex[p->v2], p->info);
		}
		p = p->next;
	}
}
