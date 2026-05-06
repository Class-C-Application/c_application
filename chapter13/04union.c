#include <stdio.h>

//유니온 구조체를 정의하면서 변수 data1도 선언한 문장
union data
{
	char ch;	//문자형
	int cnt;	//정수형
	double real;//실수형
} data1; //data1은 전역변수

int main(void)
{
	union data data2 = { 'A' };  //첫 멤버인 char형으로만 초기화 가능
	union data data3 = { 97.78 }; //컴파일 시 경고 발생
	union data data4 = data2;    //다른 변수로 초기화 가능
	data4.real = 3.78;

	printf("%zu %zu\n", sizeof(union data), sizeof(data3));
	printf("%c %c %f\n", data2.ch, data3.ch, data4.real);

	//멤버 ch에 저장
	data1.ch = 'a';
	printf("%c %d %f\n", data1.ch, data1.cnt, data1.real);
	//멤버 cnt에 저장
	data1.cnt = 100;
	printf("%c %d %f\n", data1.ch, data1.cnt, data1.real);
	//멤버 real에 저장
	data1.real = 3.156759;
	printf("%c %d %f\n", data1.ch, data1.cnt, data1.real);

	/* 
	union data value = { .real = 3.98 };
	printf("%.2f\n", value.real);

	union share
	{
		int count;
		float value;
		char  str[20];
	};

	typedef union share share;

	share a;
	a.count = 55;
	printf("a.count : %d\n", a.count);
	*/


	return 0;
}
