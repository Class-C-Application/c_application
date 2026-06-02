#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE* f;	
	if (fopen_s(&f, "05flist.c", "r") != 0) //읽기 모드로 파일 열기 
	//if ( (f = fopen("05flist.c", "r")) == NULL ) 
	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	}

	int ch, cnt = 0; //문자를 저장할 ch, 행번호를 저장할 cnt
	printf("%4d: ", ++cnt); //1행 처음에 번호 1 출력
	while ((ch = fgetc(f)) != EOF)
	{
		putchar(ch); //putc(ch, stdout);
		if (ch == '\n') //2행부터 행 처음에 행 번호 출력
			printf("%4d: ", ++cnt);
	}
	printf("\n");
	fclose(f);

	return 0;
}
