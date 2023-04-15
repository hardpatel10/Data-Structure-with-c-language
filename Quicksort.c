#include <stdio.h>
#include <stdlib.h>

void swap(int *a , int *b){
	int t = *a;
	*a = *b;
	*b = t;
}

int partitation(int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = low - 1;

	for (int j = low; j <= high - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void quicksort(int arr[], int low, int high)
{
	if (low < high)
	{
		int pi = partitation(arr, low, high);
		quicksort(arr, low, pi - 1);
		quicksort(arr, pi + 1, high);
	}
}

int main()
{

	int arr[] = {3, 5, 4, 8, 1, 3, 4};
	int n = sizeof(arr) / sizeof(arr[0]);

	quicksort(arr, 0, n - 1);

	for (int  i = 0; i < n; i++)
	{
		printf(" %d " , arr[i]);
	}
	

	return 0;
}
