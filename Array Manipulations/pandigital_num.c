/*
Pandigital number
Given a 9 digit number, check does it contains all digits from 1 to 9.
inp:678125934 out: yes
inp:679125964 out: no
*/

#include <stdio.h>

int main()
	{
	int arr[9] = { 6, 7, 8, 1, 2, 5, 9, 3, 4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int flag[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	int temp = 1;

	for (int i = 0; i < n ; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			if (arr[i] == j)
			{
				flag[j-1] = 1;
				break;
			}
			//else flag = 0;
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (flag[i] == 0)
		{
			temp = 0; break;
		}
		//printf("%d ", flag[i]);
	}
	if (temp == 1) printf("Yes");
	else printf("No");

	return 0;
}
