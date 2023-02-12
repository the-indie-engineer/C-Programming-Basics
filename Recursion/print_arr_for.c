#include <stdio.h>

int disp(int* num, int n)
{
	static int i = 0;
	if (i>n-1) return 0;
	printf("%d ", num[i]);
	i++;
	disp(num,n);
}

int main()
{
	int num[5] = { 10, 20, 30, 40, 50 };
	int n = sizeof(num) / sizeof(num[0]);
	disp(num, n);
	return 0;
}