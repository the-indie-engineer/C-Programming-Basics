/*
Print the sum of integer values from 1 to n using recursion concept
Input: 5
Output: 15

Author: Thiruvarulselvan K, https://github.com/the-indie-engineer
Date created: 29 Jan 2023
*/

#include <stdio.h>

void disp_sum(int n)
{
	static int i = 1;
	static int sum = 0;
	if (i > n) {
		printf("%d ", sum); return 0;
	}
	sum += i;
	i++;
	disp_sum(n);
}

int main()
{
	int n = 5;
	disp_sum(n);
	return 0;
}