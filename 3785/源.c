#include <stdio.h>
#include <stdlib.h>
void swap(int* x, int* y);
void quick_sort(int arr[], int start, int end);
int main(void)
{
	int n, m, num[100001], count;
	while ((scanf("%d %d", &n, &m)) != EOF && (n != 0 || m != 0))
	{
		count = 0;
		memset(num, 0, sizeof(num));
		for (int i = 0; i < n; i++)
			scanf("%d", &num[i]);
		quick_sort(num, 0, n - 1);
		for (int i = 0; i < n; i++)
		{
			if (num[i] > 0)
				count++;
		}
		if (count >= m)
		{
			printf("%d", num[0]);
			if (m > 1)
			{
				for (int i = 1; i < m; i++)
					printf(" %d", num[i]);
			}
			printf("\n");
		}
		else
		{
			printf("%d", num[0]);
			if (count > 1)
			{
				for (int i = 0; i < count; i++)
					printf(" %d", num[i]);
			}
			printf("\n");
		}
	}
	return 0;
}
void swap(int* x, int* y) 
{
	int t = *x;
	*x = *y;
	*y = t;
}
void quick_sort(int arr[], int start, int end) 
{
	if (start >= end)
		return;
	int mid = arr[end];
	int left = start, right = end - 1;
	while (left < right)
	{
		while (arr[left] > mid && left < right)
			left++;
		while (arr[right] <= mid && left < right)
			right--;
		swap(&arr[left], &arr[right]);
	}
	if (arr[left] <= arr[end])
		swap(&arr[left], &arr[end]);
	else
		left++;
	if (left) {
		quick_sort(arr, start, left - 1);
	}
	quick_sort(arr, left + 1, end);
}