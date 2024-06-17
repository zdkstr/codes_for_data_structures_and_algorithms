#include"head.h"

bool Topo_Max_Distance(MGraph& G, int VertexOrder[],MaxDistance source_to_vertex[], MaxDistance vertex_to_destination[]) {
    //?????????????????????????
    int indegree_of_vertex[MaxVertexNum];
    for (int j = 0;j < G.vertexnum;j++) {
        int k = 0;
        for (int i = 0;i < G.vertexnum;i++) {
            if (G.Arc[i][j] != 0 && G.Arc[i][j] != INFINITY)
                k++;
        }
        indegree_of_vertex[j] = k;
    }
    //?????????0????????????
    SqStack S;InitStack(S);
    for ( int i = 0; i < G.vertexnum; i++) 
        if (indegree_of_vertex[i] == 0) 
            Push(S, i);
    //?????????????????????????????????????????
    for (int i = 0; i < G.vertexnum; i++) {
        source_to_vertex[i].max_distance = 0;
        source_to_vertex[i].transition = -1;
        vertex_to_destination[i].max_distance = 0;
        vertex_to_destination[i].transition = -1;
    }
   
    int count = 0;
    while (!StackEmpty(S)) {
        int i;
        Pop(S, i);
        //???????????????????????
        VertexOrder[count++] = i;
        //????????????????????????????0??????????????????????????????
        for (int j = 0;j < G.vertexnum;j++) {
            if (G.Arc[i][j] != 0 && G.Arc[i][j] != INFINITY) {
                indegree_of_vertex[j]--;
                if (indegree_of_vertex[j] == 0)
                    Push(S, j);
                if (source_to_vertex[j].max_distance < source_to_vertex[i].max_distance + G.Arc[i][j]) {
                    source_to_vertex[j].max_distance = source_to_vertex[i].max_distance + G.Arc[i][j];
                    source_to_vertex[j].transition = i;
                }
            }
        }
    }
    if (count < G.vertexnum) {     //????count?????????????????????????
        printf("？？有回路");
        return false;
    }
    count--;
    while (count!=-1) {
        int k = VertexOrder[count--];
        for (int i = 0;i < G.vertexnum;i++) {
            if (G.Arc[i][k] != 0 && G.Arc[i][k] != INFINITY) 
                if (vertex_to_destination[i].max_distance < vertex_to_destination[k].max_distance + G.Arc[i][k]) {
                    vertex_to_destination[i].max_distance = vertex_to_destination[k].max_distance + G.Arc[i][k];
                    vertex_to_destination[i].transition = k;
                }
        }
    }
    return true;
}
