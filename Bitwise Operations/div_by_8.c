#include <stdio.h>

int main()
{
	int num = 15;
	int mask = 7; //0111

	if ((num & mask) == 0) printf("Dvisible by 8");
	else printf("Not divisible by 8");

	return 0;
}