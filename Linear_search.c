#include <stdio.h>
int main()
{
	int a[100];
	int n, item, i;
	printf("Enter the number of elemnts in Array a:");
	scanf("%d", &n);
	printf("Enter the  elemnts of the Array :");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the  elemnts to be searched :");
	scanf("%d", &item);
	i = 0;
	while (i < n && item != a[i])
	{
		i++;
	}
	if (a[i] = item)
	{
		printf("Item Found at position=%d", i + 1);
	}
	else
	{
		printf("Item is not found in array");
	}

	return 0;
}
