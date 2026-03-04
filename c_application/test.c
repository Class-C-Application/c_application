#include <stdio.h>

int main(void)
{
	int x = 15; // 1111

	printf("test\n", x, x);		 // 1111
	printf("%3d %08x\n", 1, x & 1);  // 1111 & 0001
	printf("%3d %08x\n", 15, x | 1); // 1111 | 0001
	printf("%3d %08x\n", 14, x ^ 1); // 1111 ^ 0001
	printf("%3d %08x\n", ~x, ~x);	 //-16 

	return 0;
}