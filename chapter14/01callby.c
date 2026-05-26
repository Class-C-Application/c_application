#include <stdio.h>

void increase(int origin, int increment);
void incbyaddress(int* origin, int increment);

int main(void)
{
	int amount = 10;
	increase(amount, 20); //amount가 20 증가하지 않음
	printf("%d\n", amount);

	amount = 100;
	incbyaddress(&amount, 20); //&amount: amount의 주소로 호출
	printf("%d\n", amount);

	return 0;
}

void increase(int origin, int increment)
{
	origin += increment;
}
void incbyaddress(int* origin, int increment)
{
	//*orogin은 origin이 가리키는 변수 자체
	*origin += increment; //그러므로 origin이 가리키는 변수 값이 20 증가
}
