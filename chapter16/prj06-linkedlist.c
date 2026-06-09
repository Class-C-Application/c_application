#include "prj06-linkedlist.h"

LINK createNode(char* name);
LINK append(LINK head, LINK cur);
int printList(LINK head);

int main(void)
{
    char name[30];
    LINK head = NULL;
    LINK cur;

    printf("이름을 입력하고 Enter를 누르세요. >> \n");
    while (gets(name) != NULL)
    {
        cur = createNode(name);
        if (cur == NULL) {
            printf("동적메모리 할당에 문제가 있습니다.\n");
            exit(1);
        }
        head = append(head, cur);
        printList(head);
    }

    return 0;
}
