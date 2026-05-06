#include <stdio.h>
#include <string.h>

//날짜를 위한 구조체
struct date
{
	int year;	//년
	int month;	//월
	int day;	//일
};

//은행계좌를 위한 구조체
struct account
{
	[          ] open;	// 가이드: struct date형 멤버
	char name[12];		//계좌주 이름
	int actnum;			//계좌번호
	double balance;		//잔고
};

int main(void)
{
	struct account me = { { [    ], [    ], [    ] }, "홍길동", 1001, 300000 };
	// 가이드: open 초기화 — 2022, 3, 9

	printf("구조체 크기: %zu\n", sizeof(me));
	printf("[%d. %d. %d]\n", [            ], [             ], [           ]);
	// 가이드: me.open.year, me.open.month, me.open.day
	printf("%s %d %.2f\n", me.name, me.actnum, me.balance);
}
