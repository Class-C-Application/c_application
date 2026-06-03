#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pi = NULL;
	
	pi = (int*) malloc( sizeof(int) ); //동적메모리 할당
	if (pi == NULL) //동적메모리 할당 검사
	{
		printf("메모리 할당에 문제가 있습니다.");
		exit(1);
	};
	
	*pi = 7; //동적 메모리에 내용 값 7 저장
	printf("주소 값: *pi = %p, 저장 값: p = %d\n", pi, *pi);
		
	free(pi); //동적 메모리 해제

	return 0;
}



