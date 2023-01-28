/*
Find the second maximum in the array
inp: 10 7  8  3  2 6
out:8
*/

#include<stdio.h>
int main() {
	int arr[6] = { 5, 12, 8, 3, 2, 9 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int sec_max = arr[1], max = arr[0];

	for (int i = 0; i < n; i++)
	{

		if (max < arr[i])
		{
			sec_max = max;
			max = arr[i];
		}
		else if (sec_max < arr[i])
			sec_max = arr[i];
	}

	printf("%d\n", sec_max);
	return 0;
}
