/*
Given an array and size of sub array, find the maximum sum that can be obtained 
in the given sub array size. 
inp: 6 2 7 2 5 9 2 1 3 7 sub_arr_size:3 
*/

#include <stdio.h>
int main()
{
	int arr[14] = { 6, 2, 7, 2, 5, 9, 2, 1, 3, 7 };
	int sub = 3, max = 0, sum = 0;
	int n = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < n - 2; i++)
	{
		sum = arr[i] + arr[i + 1] + arr[i + 2];
		if (sum > max) max = sum;
	}

	printf("%d", max);
	return 0;
}

