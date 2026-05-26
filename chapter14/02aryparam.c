#include <stdio.h>

int sumary(int*, int); //int sumary(int ary[], int SIZE)도 가능

int main(void)
{
	int point[] = { 95, 88, 76, 54, 85, 33, 65, 78, 99, 82 };
	int aryLength = sizeof(point) / sizeof(int); //배열크기 구하기

	int* address = point; //address는 포인터 변수이며 point는 배열 상수
	int sum = 0;
	for (int i = 0; i < aryLength; i++) //메인에서 직접 배열 합 구하기
		// 가이드: 포인터 연산으로 point 배열 원소를 더하기
		sum += ;
		//sum += *(point++);	//오류발생
	printf("main()에서 구한 합은 %d\n", sum);

	//함수호출하여 합 구하기, 첫 인자 &point[0] 또는 address로도 가능
	printf("함수 sumary() 호출로 구한 합은 %d\n", sumary(        , aryLength));

	return 0;
}

int sumary(int* ary, int SIZE) //int sumary(int ary[], int SIZE)도 가능
{
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		// 가이드: ary가 가리키는 값을 더한 후 다음 원소로 이동
		sum += ;
		//sum += ary[i];		//가능
		//sum += *(ary + i);	//가능
	}

	return sum;
}
