#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* fname1 = "old.c";
	char* fname2 = "new.c";
	rename(fname1, fname2); //파일 이름 수정 함수 호출 
	printf("파일 %s가 %s로 수정되었습니다.\n", fname1, fname2);

	return 0;
}
