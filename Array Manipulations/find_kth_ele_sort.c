#include <stdio.h>

int main()
{
	int arr[] = { -123, 12, 45, 345, 90, -112, 345 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int flag = 1;
	int k = 2;

	while(1)
	{	
		flag = 0;
		for (int i = 0; i < n-1; i++)
		{	
			int temp;
			if (arr[i] > arr[i + 1])
			{
				temp = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = temp;
				flag = 1;
			}
		}

		if (flag == 0) break;
	}
	printf("%2d ", arr[k-1]);

	return 0;
}