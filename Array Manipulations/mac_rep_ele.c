/*
Find the maximum repeated ele in the array
inp: 1 3 4 2 1 3 4 5 2 8 1 3 8 4 5 3 6 7 3
out: 3
*/

#include <stdio.h>

int main()
{
	int arr[20] = { 1, 4, 4, 2, 1, 4, 4, 5, 2, 8, 1, 4, 8, 4, 5, 3, 6, 7, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int count[20];
	int count_max = count[0];
	int max_pos = 0;
	memset(count, '\0', 20);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j<n; j++)
			if (arr[i] == arr[j]) count[i] += 1;
	}
	for (int i = 0; i < n; i++)
		if (count_max < count[i])
		{
			max_pos = i;
			count_max = count[i];
		}

	printf("Count = %d\nElement %d", count_max, arr[max_pos]);

	return 0;
}
