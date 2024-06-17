#include "head.h"
void CreateRBTree(RBTree& T, RBNode* p_null_node) {
	for (int x;scanf("%d", &x) != EOF && x != 9999;) {
		RBTreeInsert(T, x, p_null_node);
	}
}
