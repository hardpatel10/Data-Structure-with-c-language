#include <stdio.h>

int linear(int arr[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int arr[5] = {10, 54, 69, 87, 88};

	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 69;
	int result = linear(arr, n, x);
	if (result == -1)
	{
		printf("Elemnt not found in array !!");
	}
	else
	{
		printf("Element %d id found at index %d \n ", x, result);
	}

	return 0;
}
