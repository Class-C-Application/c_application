#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
    char fname[] = "char.txt";
    FILE* f;
    int ch;

    // 가이드: char.txt를 쓰기 모드로 여세요.
    if (fopen_s([    ], fname, [   ]) != 0)
    {
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    puts("영어 문자를 계속 입력하다가 종료하려면 x를 입력 >>");

    // 가이드: x가 입력될 때까지 문자 하나를 파일에 쓰세요.
    while ((ch = _getche()) != [   ])
        [       ](ch, f);
    fclose(f);
    puts("");

    // 가이드: char.txt를 읽기 모드로 다시 여세요.
    if (fopen_s(&f, fname, [   ]) != 0)
    {
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    // 가이드: EOF가 나올 때까지 파일에서 문자 하나씩 읽어 출력하세요.
    while ((ch = [       ](f)) != EOF)
        _putch(ch);
    fclose(f);
    puts("");

    return 0;
}
