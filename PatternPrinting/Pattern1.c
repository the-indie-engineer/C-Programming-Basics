/*Jan 26 Pattern Q1
1 1 1 1
1 1 1 1
1 1 1 1
1 1 1 1*/

#include <stdio.h>
int main()
{
	int num;
	scanf_s("%d", &num);

	for(int i =0; i<num; i++,printf("\n"))
		for(int j=0; j<num; j++) printf(" 1");

	return 0;

 }