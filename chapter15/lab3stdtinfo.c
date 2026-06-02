#include <stdio.h>

typedef struct student
{
    char dept[40];
    char name[20];
    int snum;
} student;

int main(void)
{
    student mylab[] = {
        { "컴퓨터정보공학과", "이미정", 20224576 },
        { "컴퓨터정보공학과", "김별이", 20226734 },
        { "컴퓨터소프트웨어공학과", "김한수", 20238732 }
    };

    FILE* f;
    char fname[] = "student.bin";

    // 가이드: student.bin을 이진 쓰기 모드로 열고 구조체 배열 전체를 저장하세요.
    fopen_s([    ], fname, [    ]);
    int size = sizeof(mylab) / sizeof(student);
    fwrite([       ], sizeof(student), [    ], f);
    fclose(f);

    // 가이드: student.bin을 이진 읽기 모드로 다시 열고 배열로 읽으세요.
    fopen_s(&f, fname, [    ]);
    student lab[10];
    fread([     ], sizeof(student), size, f);

    for (int i = 0; i < size; i++)
        fprintf(stdout, "%24s%10s%12d\n", lab[i].dept, lab[i].name, lab[i].snum);
    fclose(f);

    return 0;
}
