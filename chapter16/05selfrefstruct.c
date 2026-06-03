#include <stdio.h>
#include <stdlib.h>

struct selfref {
    int n;
    // 가이드: 다음 구조체를 가리키는 자기참조 포인터 멤버를 선언하세요.
    [                   ] next;
};

int main(void)
{
    typedef struct selfref list;

    list* first = NULL, * second = NULL;

    // 가이드: 구조체 list 하나씩 저장할 공간을 동적 할당하세요.
    first = (list*) [      ]( [           ] );
    second = (list*) [      ]( [           ] );

    first->n = 100;
    second->n = 200;
    first->next = second->next = NULL;

    // 가이드: first 다음에 second를 연결하세요.
    [             ] = second;

    printf("%p\n", first);
    printf("%d %p\n", first->n, first->next);
    printf("%d\n\n", first->next->n);

    printf("%p\n", second);
    printf("%d %p\n", second->n, second->next);

    [    ](first);
    [    ](second);

    return 0;
}
