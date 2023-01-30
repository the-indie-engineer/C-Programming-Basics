#include <stdio.h>

int main()
{
	int num = 12;
	int mask = 1;
	int count = 0;

	while (num > mask)
	{
		if ((num & mask) == mask) count++;
		mask = mask << 1;
	}
	printf("Count: %d", count);

	return 0;
}