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

/*
* 递归打印打印出树形
* T		正在打印的树
* depth	目前在打印树的第几层
* right	该子树是否为右子树
* tap	目前子树需要的相对偏移数量
* Y     从哪一层开始打印二叉树
*/
void Traverse(BiTree T, int depth, int right, int tap,int Y) {
	if (T == NULL) return;
	static int treeDepth = BiTreeDepth(T);  // 获取树的深度
	BiTree L=T->lchild, R=T->rchild;  // 获取左右子树
	int tap1 = tap * pow(2, treeDepth - depth);  // 计算父树的偏移量
	int tap2 = right * pow(2, treeDepth - depth);  // 计算子树的偏移量
	int tap3 = pow(2, treeDepth - depth - 1);  // 计算半偏移量
	
	// 计算树根的光标坐标
	int x = (tap1 + tap2 + tap3 - 1)*2;  // x 计算方法为：父偏移量 + 子偏移量 + 半偏移量 - 1
	int y = Y+1+depth * 2;  // y 计算方法为：目前打印的层数 * 2

	// 打印树根
	gotoxy(x, y);  // 移动光标到指定位置
	printf("%c", T->data);  // 打印数据
	
	// 计算递归打印子树时所需参数
	depth++;
	tap = tap * 2 + (right == 1 ? 2 : 0);
	if (L == NULL && R == NULL) return;
	else if (R == NULL) {
		// 打印左子树的位置
		gotoxy(x - tap3, y + 1);
		printf("┏");
		for (int i = 0; i < tap3 - 1; i++) printf("━");
		printf("┛");
		Traverse(L, depth, 0, tap,Y);
	}
	else if (L == NULL) {
		// 打印右子树的位置
		gotoxy(x , y + 1);
		printf("┗");
		for (int i = 0; i < tap3 - 1; i++) printf("━");
		printf("┓");
		Traverse(R, depth, 1, tap,Y);
	}
	else {
		// 打印左右子树的位置
		gotoxy(x - tap3, y + 1);
		printf("┏");
		for (int i = 0; i < tap3 - 1; i++) printf("━");
		printf("┻");
		for (int i = 0; i < tap3 - 1; i++) printf("━");
		printf("┓");
		Traverse(L, depth, 0, tap,Y);
		Traverse(R, depth, 1, tap,Y);
	}
}
// 打印树形接口
void PrintBiTree_TreeForm(BiTree T) { // 注意，不同计算机能打印的层数不同
	COORD pos=getCursorPosition();
	Traverse(T, 0, 0, 0,pos.Y);
	int treeDepth = BiTreeDepth(T);
	gotoxy(0,treeDepth+4+pos.Y);
}
