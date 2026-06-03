#include <stdio.h>
#include <stdlib.h>

struct node {
    int x;
    [                   ] next;
};

int main(void)
{
    // 가이드: 노드 two -> one 순서가 되도록 노드 2개를 동적 할당하고 연결하세요.
    struct node* one = [      ](sizeof(struct node));
    one->x = 10;
    one->next = NULL;

    struct node* two = [      ](sizeof(struct node));
    two->x = 20;
    two->next = [   ];

    struct node* head = [   ];
    struct node* cur = head;

    // 가이드: 마지막 노드로 이동하세요.
    if (cur)
    {
        while ([                  ] != NULL)
            cur = [          ];
    }

    // 가이드: 마지막에 새 노드를 하나 추가하고 값 500을 저장하세요.
    cur->next = [      ](sizeof(struct node));
    cur = [          ];
    cur->next = NULL;
    cur->x = [   ];

    int cnt = 0;
    cur = head;
    while (cur != NULL)
    {
        printf("%3d번째 노드는 %d\n", ++cnt, cur->x);
        cur = [          ];
    }

    return 0;
}
