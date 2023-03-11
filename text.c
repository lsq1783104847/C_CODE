#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>
int main()
{
	int n = 0; int i = 0; int j = 0; int e = 0;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n * n);
	if (arr == NULL)
		printf("%s", strerror(errno));
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			scanf("%d", arr + i * n + j);
	}i = 0; j = 0;
	if (n == 1)
		printf("%d", arr[0]);
	else if (n == 2)
		printf("%d %d %d %d", arr[0], arr[1], arr[2], arr[3]);
	else
	{
		printf("%d ", *(arr + i * n + j));
		j++;
		while (1)
		{
			for ( ; j >= 0; j--)
			{
				printf("%d ", *(arr + i * n + j));
				i++;
			}j++;////////////////////
			if (i == n-1)
			{
				e = 1;
				for (; i >= 0; i--)
				{
					printf("%d ", *(arr + i * n + j));
					j++;
				}i++; j--;
				break;
			}////////////////////
			for ( ; i >= 0; i--)
			{
				printf("%d ", *(arr + i * n + j));
				j++;
			}i++;//////////////////
			if (j == n-1)
			{
				e = 2;
				for ( ; j >= 0; j--)
				{
					printf("%d ", *(arr + i * n + j));
					i++;
				}j++; i--;
				break;
			}
		}///////////////////////////////////////////////////////
		if (e == 1)
		{
			i++;
			while (1)
			{
				for (; i<=n-1 ; j--)
				{
					printf("%d ", *(arr + i * n + j));
					i++;
				}j += 2; i--;
				if (i == n-1 && j == n-1)
				{
					printf("%d ", *(arr + i * n + j));
					break;
				}
				for (; j<=n-1 ; i--)
				{
					printf("%d ", *(arr + i * n + j));
					j++;
				}i += 2; j--;
				if (i == n-1 && j == n-1)
				{
					printf("%d ", *(arr + i * n + j));
					break;
				}
			}
		}
		else
		{
			j++;
			while (1)
			{
				for (; j<=n-1 ; i--)
				{
					printf("%d ", *(arr + i * n + j));
					j++;
				}i += 2; j--;
				if (i == n-1 && j == n-1)
				{
					printf("%d ", *(arr + i * n + j));
					break;
				}
				for (; i <= n - 1; j--)
				{
					printf("%d ", *(arr + i * n + j));
					i++;
				}j += 2; i--;
				if (i == n-1 && j == n-1)
				{
					printf("%d ", *(arr + i * n + j));
					break;
				}
			}
		}
	}
	free(arr); arr = NULL;
	return 0;
}