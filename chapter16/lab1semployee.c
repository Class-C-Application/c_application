#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 가이드: 직원 이름, 급여, 다음 직원을 가리키는 포인터를 가진 자기참조 구조체를 완성하세요.
typedef struct employee {
    char* name;
    int salary;
    [                   ] next;
} employee;

int main(void)
{
    // 가이드: 직원 구조체 2개를 동적 할당하세요.
    employee* you = (employee*)[      ]( [                 ] );
    employee* one = (employee*)[      ]( [                 ] );

    // 가이드: 이름 문자열 저장공간을 동적 할당하고 strcpy()로 복사하세요.
    you->name = (char*)[      ](strlen("고은아") + 1);
    [      ](you->name, "고은아");
    you->salary = 2000000;

    one->name = (char*)[      ](strlen("정재형") + 1);
    [      ](one->name, "정재형");
    one->salary = 1000000;

    // 가이드: you 다음에 one을 연결하세요.
    [          ] = one;

    printf("%s %d\n", you->name, you->salary);
    printf("%s %d\n", one->name, one->salary);
    printf("%s %d\n", you->next->name, you->next->salary);

    // 가이드: 문자열 메모리와 구조체 메모리를 해제하세요.
    [    ](you->name);
    [    ](one->name);
    [    ](one);
    [    ](you);

    return 0;
}
