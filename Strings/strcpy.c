/*
Author: Thiruvarulselvan K
Date Created: 28 Jan 2023

Strcopy   inp:str1:"hello" str2:""        out:str1:"hello" str2:"hello"
*/

#include <stdio.h>

int main()
{
	char str1[] = "Hello";
	int n = sizeof(str1) / sizeof(str1[0]);
	char *str2 = (char*)malloc(n);

	for (int i = 0; i < n; i++)
	{
		str2[i] = str1[i];
		printf("%c", str2[i]);
	}
	return 0;
}