

#include <stdio.h>

int disp(int* num, int n,int i)
{
	if (i > n-1) return 0;
	disp(num, n,i+1);
	printf("%d ", num[i]);
}

int main()
{
	int num[5] = { 10, 20, 30, 40, 50 };
	int n = sizeof(num) / sizeof(num[0]);
	int i = 0;
	disp(num, n, i);
	return 0;
}