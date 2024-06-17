#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAXLEN 255
typedef struct {
	char ch[MAXLEN];
	int length;
}SString;


void InitString(SString& S);
void CreateString(SString& S);
void PrintString(SString S);
bool StrCopy(SString& S, SString T);
bool Concat(SString& T, SString S1, SString S2);
int StrLength(SString S);
bool StrEmpty(SString S);
void ClearString(SString& S);
bool DestroyString(SString& S);
int StrCompare(SString S, SString T);
void PrintResult(int tag);
bool StrInsert(SString& S, int pos, SString T);
bool StrDelete(SString& S, int pos, int len);
bool GetSubString(SString S, int pos, int len,SString& Sub );
int LocateSubString_Simple(SString S, SString T);
int LocateSubString_KMP_Next(SString S, SString T);
int LocateSubString_KMP_Nextval(SString S, SString T);
void PrintPosition(int pos);
bool StrChange(SString &S, int pos, SString Sub );
