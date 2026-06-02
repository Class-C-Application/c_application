#include <stdio.h>

typedef struct student //구조체 자료형 student 정의
{
	char dept[40];	//학과
	char name[20];	//이름
	int snum;		//학번
} student;

int main()
{
	student mylab[] = {
		{ "컴퓨터정보공학과", "이미정", 20224576},
		{ "컴퓨터정보공학과", "김별이", 20226734 },
		{ "컴퓨터소프트웨어공학과", "김한수", 20238732 } };

	FILE* f;
	char fname[] = "student.bin";
	fopen_s(&f, fname, "wb");
	int size = sizeof(mylab) / sizeof(student);
	fwrite(mylab, sizeof(student), size, f);
	fclose(f);

	fopen_s(&f, fname, "rb"); //다시 읽기 위해 오픈
	//파일에서 구조체 배열 모두를 한번에 읽어 다시 저장된 배열을 출력 
	student lab[10]; //다시 파일의 내용을 저장할 배열 선언
	//파일 f에서 sizeof(student) 크기로 size 수만큼 읽어 lab에 저장  
	fread(lab, sizeof(student), size, f);
	for (int i = 0; i < size; i++)
		fprintf(stdout, "%24s%10s%12d\n", lab[i].dept, lab[i].name, lab[i].snum);
	fclose(f);

	/*
	//파일에서 구조체 하나씩 읽어 읽을 내용이 있으면 출력
	student one;
	while (fread(&one, sizeof(student), 1, f))
		fprintf(stdout, "%24s%10s%12d\n", one.dept, one.name, one.snum);
	fclose(f);
	*/

	return 0;
}
