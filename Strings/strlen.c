#include <stdio.h>

int str_len(char *str)
{
	int len;
	for (len = 0; str[len] != '\0'; len+=1);
	return len;
}
int main()
{
	char str[] = "Hello";
	int res;
	res = str_len(str);
	printf("%d", res);
	return 0;
}