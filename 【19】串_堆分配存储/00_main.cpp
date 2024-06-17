#include"head.h"
int main() {
	HString S,T,Sub,R;
	printf("请输入字符串S：");InitString(S);CreateString(S, 50);
	printf("请输入字符串T：");InitString(T);CreateString(T, 50);
	printf("从串S的某个位置起插入字符串T：");StrInsert(S,2,T);PrintString(S);
	printf("从串S的某个位置起删除n个元素：");StrDelete(S,2,3);PrintString(S);
	printf("从串S的某个位置起查找n个元素：");GetSubString(S,2,3,Sub);PrintString(Sub);
	printf("在串S中查找子串T并返回位置：");int pos=LocateSubString_Simple(S,T);PrintPosition(pos);
	printf("在串S中查找子串T并返回位置：");pos=LocateSubString_KMP_Next(S,T);PrintPosition(pos);
	printf("在串S中查找子串T并返回位置：");pos=LocateSubString_KMP_Nextval(S,T);PrintPosition(pos);
	printf("从串S的某个位置起修改n个元素：");StrChange(S,2,T);PrintString(S);
	
	printf("将串T的数据复制到空串R：");InitString(R);StrCopy(R,T);PrintString(R);
	printf("将串S和串T的数据拼接到空串R：");DestroyString(R);Concat(R, S, T);PrintString(R);
	printf("将串Ｔ赋值到空串R：");DestroyString(R);StrAssign(R,T);PrintString(R);
	printf("比较串S和串T的大小：");int result=StrCompare(S,T);PrintResult(result);
	printf("比较串S和串T的大小：");result=strcmp(S.ch,T.ch);PrintResult(result);
	
	
	DestroyString(S);
	DestroyString(T);
	DestroyString(Sub);
	DestroyString(R);

}
