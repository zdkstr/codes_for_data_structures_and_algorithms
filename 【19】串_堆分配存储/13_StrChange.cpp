#include"head.h"
//从串S的某个位置起修改n个元素
bool StrChange(HString &S, int pos, HString Sub ) {
	int len=Sub.length;
	if (pos < 1 ||len > S.length-pos+1)
		return false; 
	for (int i = 0; i < len; i++) 
		S.ch[pos-1+i] = Sub.ch[i];
	return true;
}
