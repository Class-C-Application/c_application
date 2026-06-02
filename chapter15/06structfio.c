#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 가이드: 학생 번호, 이름, 중간, 기말, 퀴즈 성적을 저장하는 구조체를 완성하세요.
typedef struct personscore
{
    int number;
    char name[40];
    int mid;
    int final;
    int quiz;
} pscore;

void printhead(void)
{
    printf("%s\n", "  _________________________________________________");
    printf("%8s%15s%10s%8s%8s\n", "번호", "이름", "중간", "기말", "퀴즈");
    printf("%s\n", "  -------------------------------------------------");
}

int main(void)
{
    char fname[] = "score.bin";
    FILE* f;
    char line[80];
    int cnt = 0;
    pscore score;

    // 가이드: 구조체를 저장할 이진 파일을 쓰기 모드로 여세요.
    if (fopen_s([    ], fname, [    ]) != 0)
    {
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    printf("이름과 성적(중간, 기말, 퀴즈)을 입력하세요.\n");
    fgets(line, 80, stdin);
    while (!feof(stdin))
    {
        // 가이드: line 문자열에서 이름과 세 점수를 추출하세요.
        sscanf_s(line, "%s %d %d %d", score.name, 40, [          ], [          ], [          ]);
        score.number = [       ];
        // 가이드: 구조체 score 하나를 이진 파일에 쓰세요.
        fwrite([       ], sizeof(pscore), [ ], f);
        fgets(line, 80, stdin);
    }
    fclose(f);

    // 가이드: score.bin을 이진 읽기 모드로 다시 열고, 구조체를 읽어 출력하세요.
    if ((f = fopen(fname, [    ])) == NULL)
    {
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    printhead();
    fread(&score, sizeof(pscore), 1, f);
    while (!feof(f))
    {
        fprintf(stdout, "%6d%18s%8d%8d%8d\n", score.number, score.name, score.mid, score.final, score.quiz);
        fread(&score, sizeof(pscore), 1, f);
    }
    printf("%s\n", "  -------------------------------------------------");
    fclose(f);

    return 0;
}
