#include <stdio.h>
#include <stdlib.h>
void myprintf(int* ary, int n);

int main(void)
{
	int* reary, * cary;
	if ((cary = (int*)calloc(3, sizeof(int))) == NULL)
	{
		printf("메모리 할당이 문제가 있습니다.\n");
		exit(EXIT_FAILURE);
	}
	printf("%p\n", cary);
	cary[0] = 10;

	if ((reary = (int*)realloc(cary, 4 * sizeof(int))) == NULL)
	{
		printf("메모리 할당이 문제가 있습니다.\n");
		exit(EXIT_FAILURE);
	}
	printf("%p\n", reary);
	//첫 원소는 10, 이후 2개는 기본 값인 0, 마자막 하나는 쓰레기 값 
	myprintf(reary, 4); 
	free(reary);

	return 0;
}

void myprintf(int* ary, int n)
{
	for (int i = 0; i < n; i++)
		printf("ary[%d] = %d ", i, *(ary + i));
	printf("\n");
}

