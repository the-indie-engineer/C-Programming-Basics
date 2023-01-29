/*
bin to dec/oct conversion

Author: Thiruvarulselvan K, https://github.com/the-indie-engineer
Date created: 29 Jan 2023
*/

#include <stdio.h>

int bin_to_any(int num, int toBase)
{
	int digit = 0;
	int place = 1;
	int res = 0;

	while (num)
	{
		digit = num % toBase;
		res = res + (digit * place);
		place *= 2;
		num /= toBase;
	}
	return res;
}
int main()
{
	int num = 10;
	int res = 0;

	res = bin_to_any(num, 10);
	printf("%d\n", res);
	res = bin_to_any(num, 8);
	printf("%d", res);

	return 0;
}
