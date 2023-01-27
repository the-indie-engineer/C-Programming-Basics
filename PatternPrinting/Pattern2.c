/*Jan 26 Pattern Q2
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16*/

#include <stdio.h>
int main()
{
	int num, val=0;
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++, printf("\n"))
		for (int j = 0; j < num; j++) printf("%2d ",++val);

	return 0;

}