#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

#define MaxVexNum 10

typedef char VertexType;

// 链表结点的声明
typedef struct LNode {
	VertexType data;      // 弧头顶点的符号
	int info;             // 弧的权值
	struct LNode* next;   // 指针指向下一个弧头顶点
}LNode,*LinkList;

// 简单图顶点的声明
typedef struct {
	VertexType data;  // 顶点的符号
	int indegree;	  // 顶点的入度
	int outdegree;    // 顶点的出度
	LinkList L;       //ָ 指针指向链表，链表中保存与顶点相关的各个弧头顶点
}GVertex;

// 简单图(邻接链表)的声明
typedef struct {
	GVertex vertices[MaxVexNum];  // 结构体数组，一个顶点对应一个数组下标
	int vexnum;                   // 顶点的数目
	int arcnum;                   // 弧的数目
}LGraph;


void InitGraph(LGraph& G);
void CreateGraph_Directed(LGraph& G);
int VertexSubscript(LGraph& G, VertexType V);
void PrintGraph_AdjacencyList(LGraph &G);
void PrintGraph_BFSTraverse(LGraph &G,VertexType V);
void PrintfGraph_DFSTraverse(LGraph &G,VertexType V);

LNode* FirstNeighbor(LGraph &G, VertexType V);
int NextNeighbor(LGraph &G, int x, int y);





#define MaxSize 20
typedef VertexType QElemType;
typedef struct {
	QElemType data[MaxSize];
	int front;
	int rear;
}SqQueue;
void InitQueue(SqQueue& Q);
bool EnQueue(SqQueue& Q, QElemType e);
bool DeQueue(SqQueue& Q, QElemType& e);
bool QueueEmpty(SqQueue Q);
bool QueueFull(SqQueue Q);
bool GetHead(SqQueue Q, QElemType& e);
int Number(SqQueue Q);


#define MaxSize 20
typedef int ElemType;
typedef struct {
	ElemType data[MaxSize];
	int top;
}SqStack;

void InitStack(SqStack& S);
bool Push(SqStack& S, ElemType x);
bool Pop(SqStack& S, ElemType& x);
bool GetTop(SqStack S, ElemType& e);
bool StackEmpty(SqStack S);
bool StackFull(SqStack S);
void DestroyStack(SqStack& S);

