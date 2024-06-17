#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct {
	char* ch;
	int length;
}HString;

void InitString(HString& S);
void CreateString(HString& S,int Maxsize);
void PrintString(HString S);
int StrLength(HString T);
bool StrEmpty(HString S);
bool StrInsert(HString& S, int pos, HString T);
bool StrDelete(HString& S, int pos, int len);
int GetSubString(HString S, int pos, int len,HString& Sub);
int LocateSubString_Simple(HString S, HString T);
int LocateSubString_KMP_Next(HString S, HString T);
int LocateSubString_KMP_Nextval(HString S, HString T);
void PrintPosition(int pos);
bool StrChange(HString &S, int pos, HString Sub );
void DestroyString(HString& S);

int StrCopy(HString& T, HString S);
int Concat(HString& T, HString S1, HString S2);
void StrAssign(HString& S, HString &T);
int StrCompare(HString S, HString T);
void PrintResult(int result);

