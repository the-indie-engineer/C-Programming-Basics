/*
Print integer value from 1 to n using recursion concept
Input: 10
Output: 1 2 3 4 5 6 7 8 9 10

Author: Thiruvarulselvan K, https://github.com/the-indie-engineer
Date created: 29 Jan 2023
*/

#include <stdio.h>

void disp(int n)
{
	static int i = 1;

	if (i > n) return 0;
	printf("%d ", i);
	i++;
	disp(n);
}

int main()
{
	int n = 10;
	disp(n);
	return 0;
}