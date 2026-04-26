#include <stdio.h>

int main(void)
{
	int i = 100;
	char c = 'A';

	int *pi = &i;
	char *pc = &c;
	printf("간접참조 출력: %d %c\n", *pi, *pc);

	*pi = 200; //변수 i를 *pi로 간접참조하여 그 내용을 수정
	*pc = 'B'; //변수 c를 *pc로 간접참조하여 그 내용을 수정
	printf("직접참조 출력: %d %c\n", i, c);

	int data = 1000;
	pi = &data;
	printf("직접참조 출력: %d %d\n", data, *pi);

	return 0;
}

/*
void func(void)
{
	int data = 100;
	int* p = &data;
	printf("간접참조 출력: %d \n", *p);

	*p = 200; //data = 200과 동일

	int n = 100;
	int *p = &n; // 이제 *p와 n은 같은 변수
	n = *p + 1;  // n = n + 1;과 같음
	*p = *p + 1; // *p는 l-value와 r-value 어느 위치에도 사용 가능
	&n = 3;	     // 컴파일 오류 발생: &n은 l-value로는 사용할 수 없으므로 

}
*/
