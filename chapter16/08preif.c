#include <stdio.h>

#define WINDOWS 1
#define MAC 2
#define UNIX 3
#define SYSTEM WINDOWS

// 가이드: SYSTEM 값에 따라 my_int 자료형이 달라지도록 조건부 컴파일을 완성하세요.
#if [                    ]
typedef int my_int;
#elif [                  ]
typedef long my_int;
#elif [                  ]
typedef long long my_int;
#else
typedef short my_int;
#endif

int main(void)
{
    my_int n = 17;
    printf("변수크기: %zu, 저장 값: %d\n", sizeof(n), n);

    return 0;
}
