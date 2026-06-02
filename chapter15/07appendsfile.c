#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct personscore
{
    int number;
    char name[40];
    int mid;
    int final;
    int quiz;
};
typedef struct personscore pscore;

void printhead(void);
int printscore(FILE* f);
void appendscore(FILE* f, int cnt);

int main(void)
{
    FILE* f;
    char fname[] = "score.bin";
    int cnt = 0;
    long offset = 0;

    // 가이드: score.bin을 추가와 읽기가 가능한 이진 모드로 여세요.
    if ((f = fopen(fname, [     ])) == NULL)
    {
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    int readcnt = printscore(f);
    if (readcnt == 1)
    {
        pscore score;
        offset = (long)sizeof(pscore);
        // 가이드: 파일 끝에서 구조체 하나 크기만큼 앞으로 이동하세요.
        fseek(f, [        ], [        ]);
        fread(&score, sizeof(pscore), 1, f);
        cnt = score.number;
        printf("\n제일 마지막 번호가 %d번 입니다. \n\n", cnt);
    }

    // 가이드: 파일 위치를 끝으로 옮긴 뒤 새 성적을 추가하세요.
    fseek(f, 0L, [        ]);
    appendscore(f, cnt);
    printscore(f);
    fclose(f);

    return 0;
}

void appendscore(FILE* f, int cnt)
{
    // 가이드: 한 줄 입력을 구조체로 변환한 뒤 fwrite()로 추가하세요.
}

int printscore(FILE* f)
{
    // 가이드: rewind()로 처음부터 읽고, fread() 결과가 있으면 표로 출력하세요.
    return 0;
}

void printhead(void)
{
    printf("\n현재의 성적 내용은 >>\n");
    fprintf(stdout, "%s\n", "  _________________________________________________");
    fprintf(stdout, "%8s%15s%10s%8s%8s\n", "번호", "이름", "중간", "기말", "퀴즈");
    fprintf(stdout, "%s\n", "  -------------------------------------------------");
}
