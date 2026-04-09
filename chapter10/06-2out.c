#include <stdio.h> 

void out()
{
	extern int g, sg;

	printf("\t\t\t%d\n", ++g);

	//외부 파일에 선언된 정적 전역변수이므로 실행 시 오류
	//printf("%d\n", ++sg);	
}
