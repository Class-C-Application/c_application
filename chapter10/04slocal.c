#include <stdio.h> 

void reset(void); //함수원형
void count(void); //함수원형

int main(void)
{
	//자동 지역변수
	for (int i = 1; i <= 5; i++) 
	{
		reset();	
		count();
	}
}

void reset(void) //매번 1을 지정 
{
	auto int n = 1;	//자동 지역변수
	printf("자동 지역변수 n: %2d\n", n);
	n++;
}

void count(void) //이전 값을 계속 누적
{
	static int s = 10;	//정적 지역변수
	printf("\t정적 지역변수 s: %2d\n", s);
	s++;
}
