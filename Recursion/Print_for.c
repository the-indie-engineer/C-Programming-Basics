#include <stdio.h>

int disp(int num)
{
	if (num == 0) return 0;
	int dig = num % 10;
	disp(num/10);
	printf("%d ", dig);

}

int main()
{
	int num = 6749;
	disp(num);
	return 0;
}