#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct book
{
	char  title[50];
	char  author[50];
	int   ISBN;
} book;

void print(book* b);

int main()
{
	book python = { "파이썬으로 배우는 누구나 코딩", "강환수", 979117 };
	book comintro;
	// 가이드: strcpy로 title, author를 저장하고 ISBN을 대입
	strcpy(        , "소프트웨어 중심사회의 컴퓨터개론");
	strcpy(        , "강환수");
	comintro.ISBN = ;
	print(        );
	print(        );

	return 0;
}

void print(book* b)
{
	printf("제목: %s, ",        );
	printf("저자: %s, ",        );
	printf("ISBN: %d\n",        );
}
