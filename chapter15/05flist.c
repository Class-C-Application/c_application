#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* f;

    // 가이드: 현재 소스 파일 05flist.c를 읽기 모드로 여세요.
    if (fopen_s([    ], "05flist.c", [   ]) != 0)
    {
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    int ch, cnt = 0;
    printf("%4d: ", ++cnt);

    // 가이드: EOF 전까지 문자를 읽고, 개행마다 행 번호를 출력하세요.
    while ((ch = [       ](f)) != EOF)
    {
        putchar(ch);
        if (ch == [    ])
            printf("%4d: ", [       ]);
    }
    printf("\n");
    fclose(f);

    return 0;
}
