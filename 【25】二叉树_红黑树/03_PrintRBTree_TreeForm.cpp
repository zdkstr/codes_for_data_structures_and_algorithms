#include"head.h"

COORD getCursorPosition() {  // 获取光标位置
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	HANDLE  hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hConsoleOutput, &csbi);
	return csbi.dwCursorPosition;
}

void gotoxy(int x, int y){  // 更新光标位置
	COORD pos;
	pos.X = x;
	pos.Y = y;
	HANDLE hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOutput, pos);
}

int BiTreeDepth(RBTree T,RBNode *p_null_node) {  // 递归方式实现对深度的查询
	if (T==NULL||T == p_null_node)
		return 0;
	int LTreeDepth = BiTreeDepth(T->lchild,p_null_node);
	int RTreeDepth = BiTreeDepth(T->rchild,p_null_node);
	if (LTreeDepth > RTreeDepth)
		return LTreeDepth + 1; 
	else
		return RTreeDepth + 1;
}

/*
* 递归打印打印出树形
* T		正在打印的树
* depth	目前在打印树的第几层
* right	该子树是否为右子树
* tap	目前子树需要的相对偏移数量
* Y     从哪一层开始打印二叉树
*/
void Traverse(RBTree T, int depth, int right, int tap,int Y,RBNode *p_null_node) {
	if (T == NULL) return;
	static int treeDepth = BiTreeDepth(T,p_null_node);  // 获取树的深度
	RBTree L=T->lchild, R=T->rchild;  // 获取左右子树
	int tap1 = tap * pow(2, treeDepth - depth);  // 计算父树的偏移量
	int tap2 = right * pow(2, treeDepth - depth);  // 计算子树的偏移量
	int tap3 = pow(2, treeDepth - depth - 1);  // 计算半偏移量
	
	// 计算树根的光标坐标
	int x = (tap1 + tap2 + tap3 - 1)*2;  // x 计算方法为：父偏移量 + 子偏移量 + 半偏移量 - 1
	int y = Y+1+depth * 2;  // y 计算方法为：目前打印的层数 * 2

	// 打印树根
	gotoxy(x, y);  // 移动光标到指定位置
	if (T->color==0)
		printf("%dR", T->data);
	else
		printf("%dB", T->data);

	
	// 计算递归打印子树时所需参数
	depth++;
	tap = tap * 2 + (right == 1 ? 2 : 0);
	if (L == p_null_node && R == p_null_node) return;
	else if (R == p_null_node) {
		// 打印左子树的位置
		gotoxy(x - tap3, y + 1);
		printf("┏");
		for (int i = 0; i < tap3 - 1; i++) printf("━");
		printf("┛");
		Traverse(L, depth, 0, tap,Y,p_null_node);
	}
	else if (L == p_null_node) {
		// 打印右子树的位置
		gotoxy(x , y + 1);
		printf("┗");
		for (int i = 0; i < tap3 - 1; i++) printf("━");
		printf("┓");
		Traverse(R, depth, 1, tap,Y,p_null_node);
	}
	else {
		// 打印左右子树的位置
		gotoxy(x - tap3, y + 1);
		printf("┏");
		for (int i = 0; i < tap3 - 1; i++) printf("━");
		printf("┻");
		for (int i = 0; i < tap3 - 1; i++) printf("━");
		printf("┓");
		Traverse(L, depth, 0, tap,Y,p_null_node);
		Traverse(R, depth, 1, tap,Y,p_null_node);
	}
}
// 打印树形接口
void PrintRBTree_TreeForm(RBTree T,RBNode *p_null_node) {  // 不同计算机能打印的层数不同
	COORD pos=getCursorPosition();
	Traverse(T, 0, 0, 0,pos.Y,p_null_node);
	int TreeDepth=BiTreeDepth(T,p_null_node);
	gotoxy(0,TreeDepth+4+pos.Y);
}
