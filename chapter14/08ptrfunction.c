#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void add(double*, double, double);
void subtract(double*, double, double);

int main(void)
{
	void (*pf)(double*, double, double) = NULL; //함수 포인터 pf를 선언

	double m, n, result = 0;
	printf("연산 +, -를 수행할 실수 2개를 입력하세요. >> ");
	scanf("%lf %lf", &m, &n);

	pf = ; //add() 함수를 함수 포인터 pf에 저장 
	pf(        , m, n);  //add(&result, m, n);
	printf("\n더하기 수행: %lf + %lf == %lf\n", m, n, result);
	printf("%p %p\n", pf, add);

	pf = ; //subtract() 함수를 함수 포인터 pf에 저장
	pf(        , m, n);  //subtract(&result, m, n);
	printf("  빼기 수행: %lf - %lf == %lf\n", m, n, result);
	printf("%p %p\n", pf, subtract);

	return 0;
}

// x + y 연산 결과를 z가 가리키는 변수에 저장하는 함수 
void add(double* z, double x, double y)
{
	// 가이드: z가 가리키는 변수에 x + y 저장
	
}
// x - y 연산 결과를 z가 가리키는 변수에 저장하는 함수 
void subtract(double* z, double x, double y)
{
	// 가이드: z가 가리키는 변수에 x - y 저장
	
}
