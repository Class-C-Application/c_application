#include <stdio.h>

// 가이드: 매크로 인자 문자열화(#), 토큰 붙이기(##)를 이용해 매크로를 완성하세요.
#define PRT(a)          printf([  ]a" = %d 일때, ", a)
#define APRT(a)         printf([  ]a" = %3d  ", a)
#define AIPRT(a, i)     printf([  ]a"[%d] = %3d\n", i, a[  ][i])

int main(void)
{
    int prod = 1;
    int facto[6];

    for (int i = 1; i <= 5; i++)
    {
        prod *= i;
        facto[i] = prod;
        PRT(i);
        APRT(facto[i]);
        AIPRT(facto, i);
    };

    return 0;
}
