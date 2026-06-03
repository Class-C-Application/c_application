#include <stdio.h>

#define DEBUG
#define LIMIT 20

int main(void)
{
    long prod = 1;
    for (int i = 1; i <= LIMIT; i++)
    {
        prod *= i;

// 가이드: DEBUG가 정의되어 있을 때만 중간 계산 결과를 출력하세요.
[             ]
        if (i % 5 == 0)
            printf("DEBUG : 1부터 %2d까지의 곱은 %ld 입니다.\n", i, prod);
[             ]
    }

    printf("1부터 %d까지의 곱은 %ld 입니다.\n", LIMIT, prod);

    return 0;
}
