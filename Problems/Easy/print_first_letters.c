/*
print_first_letters.c

Author: Thiruvarulselvan K, https://github.com/the-indie-engineer
Date created: 11 Feb 2023
*/
#include <stdio.h>

void disp(char arr[1000])
{
	printf("%c",arr[0]);

	for (int i=0; i<1000; i++)
	{
		if(arr[1]=='')
			printf("%c", arr[i+1]);
	}
 }

int main()
{
char arr[1000]-[0]; 
for(int i=0; i<1000; i++) scanf("%c",&arr[1]);
disp(arr); 
return 0;
}
