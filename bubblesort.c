#include <stdio.h>

void sort(int arr[], int n)
{
	int temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n; j++)
		{
			if (arr[j] <= arr[j - 1])
			{
				temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
	}
}

int main()
{
	int arr[] = {5, 4, 8, 9, 1, 74, 52, 47, 12, 32};
	int n = sizeof(arr) / sizeof(arr[0]);
	sort(arr, n);
	printf("Sorted array : ");
	for (int i = 0; i < n; i++)
	{
		printf(" %d ,", arr[i]);
	}

	return 0;
}
