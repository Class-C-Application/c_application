#include <stdio.h>

struct complex //복소수를 위한 구조체
{
	double real; //실수
	double img;  //허수
};
typedef struct complex complex; //complex를 자료형으로 정의

void printcomplex(complex com);
complex pcomplexvalue(complex com);
void pcomplexaddress(complex* com);

int main(void)
{
	complex comp = { 5.8, 7.2 };
	complex pcomp;

	printcomplex(comp);
	pcomp = pcomplexvalue(comp);
	printcomplex(pcomp);
	pcomplexaddress(&pcomp);
	printcomplex(pcomp);

	return 0;
}

//구조체 자체를 인자로 사용
void printcomplex(complex com)
{
	printf("복소수 = %5.1f + %5.1fi \n", com.real, com.img);
}

//구조체 자체를 인자로 사용하여 처리된 구조체를 다시 반환
complex pcomplexvalue(complex com)
{
	com.img = -com.img;
	return com; //구조체를 반환
}

//구조체 포인터를 인자로 사용
void pcomplexaddress(complex* com)
{
	com->img = -com->img;
}
