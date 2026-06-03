#include <stdio.h>

// 가이드: int형 변수 a, b를 temp를 이용해 교환하는 매크로를 완성하세요.
#define SWAP_INT(a, b, temp) \
        [    ] = a; a = b; b = [    ];

// 가이드: double형 변수 a, b를 매크로 내부 임시 변수로 교환하세요.
#define SWAP_DOUBLE(a, b) \
        double _temp = a; a = b; b = [     ];

// 가이드: 자료형 type을 받아 어떤 자료형이든 교환할 수 있는 매크로를 완성하세요.
#define SWAP_TYPE(type, a, b) \
        { \
            type _swap_temp; \
            _swap_temp = (b); \
            (b) = [   ]; \
            (a) = [          ]; \
        }

int main(void)
{
    int a = 50, b = 70, c;
    printf("%d %d\n", a, b);
    SWAP_INT(a, b, c);
    printf("%d %d\n", a, b);
    SWAP_TYPE(int, a, b);
    printf("%d %d\n", a, b);

    double x = 3.36, y = 7.18;
    printf("%.2f %.2f\n", x, y);
    SWAP_DOUBLE(x, y);
    printf("%.2f %.2f\n", x, y);
    SWAP_TYPE(double, x, y);
    printf("%.2f %.2f\n", x, y);

    return 0;
}
