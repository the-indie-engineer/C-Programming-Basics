/*
Replace every ele with sum of right side ele
inp: 10 7  8  3  12 6
out: 36 29 21 18 6  0
*/

#include<stdio.h>
int main() {
	int arr[6] = { 10, 7, 8, 3, 12, 6 };
	int sum = 0;
	int n = sizeof(arr) / sizeof(arr[0]);
	int temp = 0;

	for (int i = 0; i < n; i++)
		sum += arr[i];

	for (int j = 0; j < n; j++)
	{
		sum -= arr[j];
		arr[j] = sum;
		printf("%d ", arr[j]);
	}
	return 0;
}
