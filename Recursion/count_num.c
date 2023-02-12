#include <stdio.h>

int disp(int num, int* count)
{
	if (num == 0) return 0;
	*count += 1;
	disp(num / 10, count);
	//return count;
}

int main()
{
	int num = 8322;
	int count = 0;
	disp(num, &count);
	printf("%d", count);
	return 0;
}

