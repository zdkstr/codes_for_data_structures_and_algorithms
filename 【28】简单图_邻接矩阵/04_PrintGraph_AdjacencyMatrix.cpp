#include "head.h"
void PrintGraph_MatrixForm(MGraph &G) {
	printf("          ");
	for (int i = 0;i < G.vertexnum;i++) {
		printf("%10c", G.Vertex[i]);
	}
	printf("\n\n");
	for (int i = 0;i < G.vertexnum;i++) {
		printf("%10c", G.Vertex[i]);
		for (int j = 0;j < G.vertexnum;j++) {
			if (G.Arc[i][j] != INFINITY)
				printf("%10d", G.Arc[i][j]);
			else
				printf("        ∞");
		}
		printf("\n");
	}
	printf("\n\n");
}
