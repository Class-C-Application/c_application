#include <stdio.h>

void myprint(void)
{
	printf("void 포인터 신기하네요!\n");
}

int main(void)
{
	int m = 10;
	double d = 3.98;
	char str[][20] = { { "C 언어," }, { "재미있네요!" } };

	void* p = ; //m의 주소 만을 저장
	printf("%p ", p); //주소 값 출력
	//printf("%d\n", *p); //컴파일 오류 발생
	printf("%d\n",        ); //int * 로 변환

	p = ;
	printf("%p ", p); //주소 값 출력
	printf("%.2f\n",        ); //double * 로 변환

	p = ;
	(        )(); //함수 포인터인 void(*)(void) 로 변환하여 호출 ()

	p = ;
	//열이 20인 이차원 배열로 변환하여 1행과 1행의 문자열 출력
	printf("%s %s\n",        ,        );
	printf("%s %s\n", str, str + 1);

	{
		char ch = 'A';
		int data = 5;
		double value = 34.76;

		void* vp;	//void 포인터 변수 vp 선언

		vp = ;	//ch의 주소 만을 저장
		vp = ;	//data의 주소 만을 저장
		vp = ;	//value의 주소 만을 저장
	}
	return 0;
}
