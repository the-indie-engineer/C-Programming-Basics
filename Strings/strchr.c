/*
Find if a character is found in the given string
Input:
str1 = "Hello"
chr = 'e'
Output: e is found in Hello

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

int str_chr(char* str1, char chr)
{
	int flag = 0;
	int n = str_len(str1);
	for (int i = 0; i < n; i++)
	{
		if (chr == str1[i]) flag = 1;
	}
	if (flag == 1) return 1;
}
int main()
{
	char str1[] = "Hello";
	char chr = 'e';

	if (str_chr(str1, chr) == 1) printf("%c is found in %s",chr,str1);
	else printf("%c is not found in %s", chr, str1);
	return 0;
}