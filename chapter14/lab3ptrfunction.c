#include <stdio.h>

int add(int a, int b);
int mult(int a, int b);
int subt(int a, int b);

int main(void)
{
	int (*pfunary[3])(int, int);
	pfunary[0] = ;
	pfunary[1] = ;
	pfunary[2] = ;

	int m = 8, n = 6;
	char* ops = "*+-";
	char op;
	while (op = *ops++)
		switch (op)
		{
			case '+': printf("%c 결과: %d\n", op, pfunary[   ](m, n));
				break;
			case '-': printf("%c 결과: %d\n", op, pfunary[   ](m, n));
				break;
			case '*': printf("%c 결과: %d\n", op, pfunary[   ](m, n));
				break;
		}

	return 0;
}

int add(int a, int b)
{
	return ;
}
int mult(int a, int b)
{
	return ;
}
int subt(int a, int b)
{
	return ;
}
