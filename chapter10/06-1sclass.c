#include <stdio.h> 

void in(void);
void out(void);

/* 전역변수 */
int g = 10;
/* 정적 전역변수 */
static int sg = 20;

int main(void)
{
	auto int a = 100;   /* main() 함수의 자동 지역변수 */

	printf("%d %d %d\n", g, sg, a);
	in(); out();
	in(); out();
	in(); out();
	printf("%d %d %d\n", g, sg, a);

	return 0;
}

void in(void)
{
	/* in() 함수의 자동 지역변수 */
	auto int fa = 1;
	/* in() 함수의 정적 지역변수 */
	static int fs;

	printf("\t%d %d %d %d\n", ++g, ++sg, ++fa, ++fs);
}
