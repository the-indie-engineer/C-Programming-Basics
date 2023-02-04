#include <stdio.h>

int main()
{
	int arr[7] = { 12, 56, 45, 18, 90, -112, 345 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int wkind = 1;
	int m = n;
	while (n > 1)
	{
		for (int i = wkind; i > 0; i--)
		{
			int temp;
			if (arr[i] < arr[i - 1])
			{
				temp = arr[i - 1];
				arr[i - 1] = arr[i];
				arr[i] = temp;
			}
		}
		n--;
		wkind++;
	}
	//printf("%d", n);
	for (int j = 0; j < m; j++) printf("%2d ", arr[j]);

	return 0;
}