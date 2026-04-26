#include <stdio.h> 

int main(void)
{
	int score[] = {10, 20, 30};
	printf("%p %p\n", score, (score + 1));
	printf("%d %d\n\n", *score, *(score + 1));

	int a[3] = {5, 10, 15};
	//포인터 변수 p를 선언해 배열 a의 주소를 저장
	int* p = a; //a == &a[0]

	//포인터 변수 p 사용, 배열 원소 값 참조
	printf("%d %d %d\n", *(p), *(p + 1), *(p + 2));
	//포인터 변수 p에서 배열처럼 첨자를 사용 가능
	printf("%d %d %d\n", p[0], p[1], p[2]);
	//a[0]을 출력 후, p 다음 주소로 증가
	printf("%d ", *p++); //*(p++), 5 출력 후, p 다음 주소로 증가
	//a[1]을 출력
	printf("%d\n\n", *p); //10 출력

	p = &a[2]; // &a[2] == a + 2
	//a[2]를 출력 후, p 이전 주소로 감소
	printf("%d ", *p--); // *(p--), 15 출력 후, p 이전 주소로 감소
	//a[1]를 출력하고 하나 감소
	printf("%d\n", (*p)--); // 10 출력 후, 1 감소해 9 저장
	//현재 포인터 변수 p는 a[1]를 가리키고 있으며 다음으로 배열 모두 출력
	printf("%d %d %d\n", *(p - 1), *p, *(p + 1)); // 5 9 15
	//p와 첨자를 사용 가능, 상대적인 음수도 가능
	printf("%d %d %d\n", p[-1], p[0], p[1]); // 5 9 15

	{
		int a[] = { 1, 2, 3, 4, 5 };
		int* p = a + 2;
		printf("%d %d\n", p[-1], p[1]);
	}

	{
		int a[] = { 10, 20, 30, 40, 50 };
		int* p = a + 1;
		printf("%d %d\n", *(a+2), ++*p);
		printf("%d\n", *p);
		printf("%d\n", *p++);
	}

	return 0;
}
