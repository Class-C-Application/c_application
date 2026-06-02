#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //for exit()

int main(void)
{
    FILE* f;

    // 가이드: myinfo.txt를 쓰기 모드로 열고 실패하면 종료하세요.
    if ((f = fopen([            ], [   ])) == NULL)
    {
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    char tel[15] = "010-3018-3824";
    char add[30] = "서초구 대정로 557";
    int age = 22;

    // 가이드: 전화번호, 주소, 나이를 파일에 출력하세요.
    fprintf([ ], "전화번호: %s, 주소:%s, 나이: %d\n", tel, add, age);
    [        ](f);

    printf("전화번호: %s, 주소:%s, 나이: %d\n", tel, add, age);
    puts("프로젝트 폴더에서 파일 myinfo.txt를 메모장으로 열어 보세요.");

    return 0;
}
