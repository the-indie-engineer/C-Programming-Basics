/*
Print the sum of integer values from 1 to n using recursion concept
Input: 10
Output: 1 2 5 10

Author: Thiruvarulselvan K, https://github.com/the-indie-engineer
Date created: 29 Jan 2023
*/

#include <stdio.h>

void disp_fact(int n)
{
	static int i = 1;
	if (i > n) return 0;
	else if (n% i == 0) printf("%d ", i);
	i++;
	disp_fact(n);
}

int main()
{
	int n = 10;
	disp_fact(n);
	return 0;
}