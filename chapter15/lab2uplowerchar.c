#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    FILE* f1;
    FILE* f2;

    // 가이드: 원본 파일을 읽기 모드로, 변환 파일을 쓰기 모드로 여세요.
    if ((f1 = fopen("lab2uplowerchar.c", [   ])) == NULL)
    {
        printf("cannot open this file\n");
        exit(1);
    }
    if ((f2 = fopen("convertchar.c", [   ])) == NULL)
    {
        printf("cannot open this file\n");
        fclose(f1);
        exit(1);
    }

    char a;
    while ((a = getc(f1)) != EOF)
    {
        // 가이드: 알파벳이면 대문자는 소문자로, 소문자는 대문자로 바꾸세요.
        if ([        ](a))
            if ([        ](a))
                a = [        ](a);
            else if ([        ](a))
                a = [        ](a);
        putc(a, f2);
    }

    fclose(f1);
    fclose(f2);
    printf("File convertchar.c is created!!!\n");

    return 0;
}
