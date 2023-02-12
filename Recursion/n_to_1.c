/*
Print integer value from n to 1 using recursion concept
Input: 10
Output: 10 9 8 7 6 5 4 3 2 1

Author: Thiruvarulselvan K, https://github.com/the-indie-engineer
Date created: 29 Jan 2023
*/

#include <stdio.h>

void disp(int n)
{
	if (n<1) return 0;
	printf("%d ", n);
	disp(n-1);
}

int main()
{
	int n = 10;
	disp(n);
	return 0;
}