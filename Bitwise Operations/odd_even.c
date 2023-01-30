#include <stdio.h>

int main()
{
	int num = 11;
	int mask = 1;

	if ((num & mask) == 0) printf("Even");
	else printf("Odd");

	return 0;
}