#include <stdio.h>

int main()
{
	int num = 10;
	int mask = 3; //011

	if ((num & mask) == 0) printf("Dvisible by 4");
	else printf("Not divisible by 4");

	return 0;
}