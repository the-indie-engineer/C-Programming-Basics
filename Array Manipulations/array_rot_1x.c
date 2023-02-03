/*
Rotate once the array to its right side
inp: 10 7 8 3 2 6
out: 6 10 7 8 3 2 
*/

#include <stdio.h>

int main()
{
	int arr[6] = { 10, 7, 8, 3, 2, 6 };
	int search = 7;
	int n = sizeof(arr) / sizeof(arr[0]);
	int m = n;
	for (int i = 0; i < n; i++)
	{
		int temp = arr[n - 1];
		arr[n - 1] = arr[i];
		arr[i] = temp;
	}
	for (int i = 0; i < m; i++) printf("%2d ", arr[i]);
	return 0;
}
