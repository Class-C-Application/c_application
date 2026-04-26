#include <stdio.h>
#include <stdint.h>

int main(void)
{
	//int value = 0x61626364; // 정수의 일부분인 코드 61은 문자 'a'
	int value = 0x44434241; // 정수의 일부분인 코드 41은 문자 'A'
	printf("저장 값: %#x(16진수) %d(10진수)\n\n", value, value);

	int *pi = &value;
	char *pc = (char*) &value;

	printf("변수명   저장값      주소값\n");
	printf("---------------------------------\n");
	printf(" value   %#x  %llu\n\n", value, (uintptr_t)pi); // 정수 int 형 출력

	printf("간접참조 코드 문자   주소값\n");
	printf("------------------------------\n");
	//문자 포인터로 정수 내부의 문자 출력 모듈
	for (int i = 0; i <= 3; i++)
	{
		char ch = *(pc + i);
		printf(" *(pc+%d) %#x %3c %llu\n", i, ch, ch, (uintptr_t)(pc + i));
	}

	{
		short value = 0x4847; // 정수의 일부분인 16진수 코드 47은 문자 'G'
		char* p = (char*) &value;
		printf("%c %c\n", *p, *(p+1));
	}
	{
		int value = 0x00110012; // 16진수 코드 0012는 10진수로 18
		short* p = (short*) &value;
		printf("%hd %hd\n", *(p+1), *p);
	}



	return 0;
}
