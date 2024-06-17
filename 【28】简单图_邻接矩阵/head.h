#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

#define INFINITY 999
#define MaxVertexNum 7
#define MaxArcNum 49

typedef char VertexType;

typedef int ArcType;

typedef struct {
	VertexType Vertex[MaxVertexNum];          // 一维数组，存储顶点
	ArcType Arc[MaxVertexNum][MaxVertexNum];  // 二维数组，存储弧
	int vertexnum, arcnum;
}MatrixGraph, MGraph;

typedef struct {
	int max_distance;
	int transition;
}MaxDistance;

void InitGraph(MGraph& G);
void CreateGraph_Directed(MGraph& G);
void CreateGraph_Undirected(MGraph& G);
void PrintGraph_MatrixForm(MGraph &G);
void PrintGraph_BFSTraverse(MGraph &G);
void PrintGraph_DFSTraverse(MGraph &G);

bool InsertVertex(MGraph &G, VertexType V);
bool AddArc(MGraph& G, VertexType V1, VertexType V2, int info);
bool AddEdge(MGraph& G, VertexType V1, VertexType V2, int info);

void DeleteVertex(MGraph& G, VertexType V);
bool RemoveArc(MGraph& G, VertexType V1, VertexType V2);
bool RemoveEdge(MGraph& G, VertexType V1, VertexType V2);

int VertexSubscript(MGraph &G, VertexType x);
int Indegree(MGraph& G, VertexType V);
int Outdegree(MGraph& G, VertexType V);
void Adjacent(MGraph &G, VertexType x, VertexType y);
void Neighbors(MGraph &G, VertexType V);
int FirstNeighbor(MGraph G, int v);
int NextNeighbor(MGraph G, int v, int w);
int GetArcInfo(MGraph& G, VertexType V1, VertexType V2);

bool SetArcInfo(MGraph& G, VertexType V1, VertexType V2, int info);
bool SetEdgeInfo(MGraph& G, VertexType V1, VertexType V2, int info);

void Prim(MGraph& G, MGraph& T, VertexType V);
void Kruskal(MGraph& G, MGraph& T);
void Dijkstra(MGraph& G, VertexType source_vertex);
void BFS_Min_Distance(MGraph& G, VertexType start_vertex);
void Floyd(MGraph& G);
void Max_Distance_Floyd(MGraph& G);
bool TopologicalSort(MGraph& G, int VertexOrder[]);
bool InverseTopologicalSort(MGraph& G);
void Topo_DFSTraverse(MGraph& G);
bool Topo_Max_Distance(MGraph& G, int VertexOrder[], MaxDistance source_to_vertex[], MaxDistance vertex_to_destination[]);
void CriticalPath(MGraph& G, MGraph& T);



// 队列的相关声明
#define MaxSize 10
typedef int QElemType;
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



// 并查集的相关声明
void InitUFSets(int UFSets[]);
void CreateUFSets(int UFSets[]);
int FindRoot(int UFSets[], int x);
void Union(int fa[], int x, int y);



// 栈的相关声明
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
int ElemNumInStack(SqStack& S);
