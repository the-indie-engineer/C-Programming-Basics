/*
dec,oct,bin to dec,oct,bin conversion

Author: Thiruvarulselvan K, https://github.com/the-indie-engineer
Date created: 29 Jan 2023
*/

#include <stdio.h>

int base_conv(int num, int fromBase, int toBase)
{
	int digit = 0;
	int place = 1;
	int res = 0;

	while (num)
	{
		digit = num % toBase;
		res = res + (digit * place);
		place *= fromBase;
		num /= toBase;
	}
	return res;
}
int main()
{
	int num = 10;
	int res = 0;

	res = base_conv(num, 10, 2);
	printf("%d\n", res);
	res = base_conv(num, 10, 8);
	printf("%d", res);

	return 0;
}
