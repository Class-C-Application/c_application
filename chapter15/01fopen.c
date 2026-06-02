#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //for exit()

int main()
{
	char* fname = "basic.txt"; //파일이름
	FILE* f; //파일 포인터

	char name[30] = "손혜진"; //파일에 쓰려는 자료
	int point = 99;

	//파일 열기 함수 fopen()과 fopen_s() 
	if ((f = fopen(fname, "w")) == NULL) //if (fopen_s(&f, fname, "w") != 0)
	{
		printf("파일이 열리지 않아 종료합니다.\n");
		exit(1);
	};

	//파일 "basic.txt"에 쓰기 
	fprintf(f, "이름 %s 학생의 성적은 %d 입니다.\n", name, point);
	fclose(f);
	//표준출력 콘솔에 쓰기 
	printf("이름 %s 학생의 성적은 %d 입니다.\n", name, point);
	puts("프로젝트 폴더에서 파일 basic.txt를 메모장으로 열어 보세요.");

	return 0;
}
