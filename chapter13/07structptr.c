#include <stdio.h>

struct lecture
{
	char name[20];	//강좌명
	int type;		//강좌구분 0: 교양, 1: 일반선택, 2: 전공필수, 3: 전공선택
	int credit;		//학점
	int hours;		//시수
};
typedef struct lecture lecture;

char* head[] = { "강좌명", "강좌구분", "학점", "시수" };
char* lectype[] = { "교양", "일반선택", "전공필수", "전공선택" };

int main(void)
{
	lecture os = { "운영체제", 2, 3, 3 };
	lecture c = { "C프로그래밍", 3, 3, 4 };
	[         ] p = [    ];	// 가이드: lecture형 포인터 p 선언 후 &os로 초기화

	printf("구조체 크기: %zu, 포인터 크기: %zu\n\n", sizeof(os), sizeof(p));
	printf("%10s %12s %6s %6s\n", head[0], head[1], head[2], head[3]);
	printf("%12s %10s %5d %5d\n", [       ], lectype[[       ]], [        ], [        ]);
	// 가이드: p->name, p->type, p->credit, p->hours

	p = [    ];	// 가이드: &c
	printf("%12s %10s %5d %5d\n", [        ].name, lectype[[        ].type], [        ].credit, [        ].hours);
	// 가이드: (*p) 역참조 방식 사용

	return 0;
}
