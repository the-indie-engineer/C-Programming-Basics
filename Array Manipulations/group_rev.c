/*
Given array and group size, do group reversal.
inp: 1 2 3 4 5 6 7 8 9 10 
group_size:4
out: 4 3 2 1 8 7 6 5 9 10
*/

#include <stdio.h>

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int group = 4;
	int n = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < n/group; i++)
	{
		int l = i*group+group;
		for (int j = i*group; j < l; j++)
		{
			int temp = arr[l - 1];
			arr[l - 1] = arr[j];
			arr[j] = temp;
			l--;
		}
	}
	for (int i = 0; i < n; i++) printf("%2d ", arr[i]);
	return 0;
}
