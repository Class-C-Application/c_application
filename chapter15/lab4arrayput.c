#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* f;

    // 가이드: test.bin을 이진 읽기/쓰기 모드로 여세요.
    if (fopen_s([    ], "test.bin", [     ]) != 0)
    {
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    int out[] = { 10, 20, 30, 40, 50, 60, 70, 80 };
    int size = sizeof(out) / sizeof(out[0]);

    printf("파일에 출력 자료: ");
    for (int i = 0; i < size; i++)
    {
        // 가이드: out[i]를 워드 단위로 파일에 출력하세요.
        [     ](out[i], f);
        printf("%d ", out[i]);
    }
    printf("\n");

    // 가이드: 파일 위치를 처음으로 돌린 뒤 하나씩 건너뛰며 읽으세요.
    [       ](f);
    printf("파일에서 입력 자료(하나씩 건너 뜀): ");
    for (int i = 0; i < size / 2; i++)
    {
        int in = [     ](f);
        fseek(f, sizeof(int), [        ]);
        printf("%d ", in);
    }
    printf("\n");
    fclose(f);

    return 0;
}
