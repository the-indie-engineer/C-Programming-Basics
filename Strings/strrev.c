/*
Reversing a string without prebuilt function C
Input: Hello
Output: olleH

Author: Thiruvarulselvan K, https://github.com/the-indie-engineer
Date created: 29 Jan 2023
*/
#include <stdio.h>

int str_len(char* str)
{
	int len;
	for (len = 0; str[len] != '\0'; len += 1);
	return len;
}

void str_rev(char* str1)
{
	char temp; 
	int n = str_len(str1);
	for (int i = 0; i < n / 2; i++)
	{
		temp = str1[n-i-1];
		str1[n - i-1] = str1[i];
		str1[i] = temp;
		//printf("%c", str1[i]);
	}
}
int main()
 {
	char str1[] = "Hello";
	str_rev(str1);
	printf("%s", str1);
	return 0;
}