#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //for exit()

int main(void)
{
    char* fname = "basic.txt";
    FILE* f;

    char name[30] = "손혜진";
    int point = 99;

    // 가이드: fname 파일을 쓰기 모드로 열고, 실패하면 NULL과 비교하세요.
    if (([        ] = fopen([        ], [   ])) == [    ])
    {
        printf("파일이 열리지 않아 종료합니다.\n");
        exit(1);
    }

    // 가이드: 파일 포인터 f를 첫 번째 인자로 전달하여 파일에 출력하세요.
    fprintf([ ], "이름 %s 학생의 성적은 %d 입니다.\n", name, point);
    [        ](f); // 가이드: 파일 스트림을 닫으세요.

    printf("이름 %s 학생의 성적은 %d 입니다.\n", name, point);
    puts("프로젝트 폴더에서 파일 basic.txt를 메모장으로 열어 보세요.");

    return 0;
}
