#include "prj06-linkedlist.h"

int main(void)
{
    char name[30];
    LINK head = NULL;
    LINK cur;

    printf("이름을 입력하고 Enter를 누르세요. >> \n");

    // 가이드: EOF가 입력될 때까지 이름을 입력받아 노드를 만들고 리스트 뒤에 추가하세요.
    while (fgets(name, sizeof(name), stdin) != NULL)
    {
        name[strcspn(name, "\n")] = '\0';

        cur = [          ](name);
        if (cur == NULL) {
            printf("동적메모리 할당에 문제가 있습니다.\n");
            exit(1);
        }

        head = [      ](head, cur);
        [        ](head);
    }

    return 0;
}
