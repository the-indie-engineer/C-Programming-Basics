/*
Find min and max along with its position
inp: 10 7  8  3  2 6
out: min: 2 at 4th pos max : 10 at 0th pos   
*/

#include<stdio.h>
int main() {
	int arr[6] = { 10, 7, 8, 3, 2, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int min_pos =0, max_pos=0;
	int min = arr[0], max = arr[0];

	
	for (int j = 0; j < n; j++)
	{
		if (min > arr[j])
		{
			min = arr[j]; min_pos = j;
		}

		if (max < arr[j])
		{
			max = arr[j]; max_pos = j;
		}
	}

	printf("min: %d at pos %d\n", min, min_pos);
	printf("max: %d at pos %d\n", max, max_pos);

	return 0;
}
