#include"head.h"
typedef struct {
	int v1;
	int v2;
	int earliest_time;
	int latest_time;
	int Criticality;//活动弧的临界值，临界值为0的就是关键路径上的关键弧
}ActivityArc;

int vertex_earliest_time[MaxVertexNum];
int vertex_latest_time[MaxVertexNum];
ActivityArc activityarc[MaxArcNum];

void CriticalPath(MGraph& G,MGraph &T) {
	//获得各顶点到源点、终点的最长距离及其活动顺序
	int VertexOrder[MaxVertexNum];
	MaxDistance source_to_vertex[MaxVertexNum];
	MaxDistance vertex_to_desdination[MaxVertexNum];
	Topo_Max_Distance(G, VertexOrder, source_to_vertex, vertex_to_desdination);
	//各活动顶点的最早开始时间等于源点到各顶点的最大距离
	for (int i = 0;i < G.vertexnum;i++)
		vertex_earliest_time[i] = source_to_vertex[i].max_distance;
	//活动序列中的最后一个顶点就是终点，源点到终点的最大距离就是关键路径的长度
	int end = VertexOrder[G.vertexnum - 1];
	int length = source_to_vertex[end].max_distance;
	//各活动顶点的最晚开始时间等于关键长度-各顶点到终点的最大距离
	for (int i = 0; i < G.vertexnum; i++) {
		vertex_latest_time[i] = length - vertex_to_desdination[i].max_distance;
	}
	int k = 0;
	//活动弧的最早开始时间等于弧尾顶点的最早开始时间
	//活动弧的最晚开始时间等于弧头顶点的最晚开始时间-弧长
	for(int i=0;i<G.vertexnum;i++)
		for (int j = 0;j < G.vertexnum;j++) {
			if (G.Arc[i][j] != 0 && G.Arc[i][j] != INFINITY) {
				activityarc[k].v1 = i;
				activityarc[k].v2 = j;
				activityarc[k].earliest_time = vertex_earliest_time[i];	
				activityarc[k].latest_time = vertex_latest_time[j]- G.Arc[i][j];
				activityarc[k].Criticality = activityarc[k].latest_time - activityarc[k].earliest_time;
				k++;
			}
		}
	//初始化图T
	for (int i = 0;i < G.vertexnum;i++) {
		T.Vertex[i] = G.Vertex[i];
		T.vertexnum = T.vertexnum + 1;
	}
	//将关键弧保存到图T中
	for (int i = 0;i < k;i++) {
		if (activityarc[i].Criticality == 0) {
			int v1 = activityarc[i].v1;
			int v2 = activityarc[i].v2;
			T.Arc[v1][v2] = G.Arc[v1][v2];
			T.arcnum++;
		}
	}
}

	



