#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct personscore //구조체 struct personscore 정의
{
	int number;		//번호
	char name[40];	//이름
	int mid;		//중간성적
	int final;		//기말성적
	int quiz;		//퀴즈성적
} pscore; //구조체 자료형 pscore 정의

void printhead()
{
	printf("%s\n", "  _________________________________________________");
	printf("%8s%15s%10s%8s%8s\n", "번호", "이름", "중간", "기말", "퀴즈");
	printf("%s\n", "  -------------------------------------------------");
}

int main()
{
	char fname[] = "score.bin";
	FILE* f;
		
	if (fopen_s(&f, fname, "wb") != 0) //쓰기 모드로 파일 열기 
	//if ( (f = fopen(fname, "wb")) == NULL ) 
	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	};

	char line[80];	//표준입력으로 행을 저장하기 위한 변수 
	int cnt = 0;	//입력 학생 번호(자동 생성) 변수
	pscore score;	//구조체 변수 선언
	printf("이름과 성적(중간, 기말, 퀴즈)을 입력하세요.\n");

	fgets(line, 80, stdin);
	while (!feof(stdin))
	{
		//표준입력의 한줄을 구조체의 멤버 별로 자료를 입력   
		sscanf_s(line, "%s %d %d %d", score.name, 40, &score.mid, &score.final, &score.quiz);
		//sscanf(line, "%s %d %d %d", score.name, &score.mid, &score.final, &score.quiz);
		score.number = ++cnt;
		fwrite(&score, sizeof(pscore), 1, f);
		fgets(line, 80, stdin);
	}
	fclose(f);

	if ((f = fopen(fname, "rb")) == NULL) //읽기 모드로 파일 열기 
	//if (fopen_s(&f, fname, "rb") != 0)
	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	};
	printhead();

	fread(&score, sizeof(pscore), 1, f); //이진모드로 파일 f에서 구조체 pscore 자료 읽기
	while (!feof(f)) //파일에서 읽어 표준출력에 쓰기 
	{
		fprintf(stdout, "%6d%18s%8d%8d%8d\n",
			             score.number, score.name, score.mid, score.final, score.quiz);
		fread(&score, sizeof(pscore), 1, f);
	}
	printf("%s\n", "  -------------------------------------------------");
	fclose(f);

	return 0;
}


