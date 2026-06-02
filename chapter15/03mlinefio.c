#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char fname[] = "grade.txt";
    char names[80];
    int cnt = 0;
    FILE* f;

    // 가이드: 여러 줄을 저장할 파일을 쓰기 모드로 여세요.
    if (fopen_s([    ], fname, [   ]) != 0)
    {
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    printf("이름과 성적(중간, 기말)을 입력하세요.\n");
    fgets(names, 80, stdin);

    // 가이드: 표준입력이 EOF가 될 때까지 반복하세요.
    while (![        ](stdin))
    {
        fprintf(f, "%d ", [       ]);
        [       ](names, f); // 가이드: 한 줄 문자열을 파일에 출력하세요.
        fgets(names, 80, stdin);
    }
    fclose(f);

    return 0;
}
