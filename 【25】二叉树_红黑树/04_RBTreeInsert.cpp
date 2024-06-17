#include "head.h"
void RBTreeInsert(RBTree& T, datatype e, RBNode* p_null_node) {
	RBNode *pnew = Insert(T, e, p_null_node);
	InsertFixup(T, pnew);
}
