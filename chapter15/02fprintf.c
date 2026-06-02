#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char fname[] = "grade.txt";
    FILE* f;
    char name[30];
    int point1, point2, cnt = 0;

    // 가이드: grade.txt를 쓰기 모드로 여세요.
    if (fopen_s([    ], fname, [   ]) != 0)
    {
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    printf("이름과 성적(중간, 기말)을 입력하세요.\n");
    scanf("%s %d %d", name, &point1, &point2);

    // 가이드: 번호, 이름, 중간, 기말을 파일에 저장하세요.
    fprintf([ ], "%d %s %d %d\n", [       ], name, point1, point2);
    fclose(f);

    // 가이드: 같은 파일을 읽기 모드로 다시 여세요.
    if (fopen_s([    ], fname, [   ]) != 0)
    {
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    // 가이드: 저장한 순서와 같은 서식으로 파일에서 읽으세요.
    fscanf(f, "%d %s %d %d\n", [    ], name, [       ], [       ]);

    fprintf(stdout, "\n%6s%16s%10s%8s\n", "번호", "이름", "중간", "기말");
    fprintf(stdout, "%5d%18s%8d%8d\n", cnt, name, point1, point2);
    fclose(f);

    return 0;
}
