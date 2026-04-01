#include<stdio.h>
int main()
{
	int i, n, arr[20], search, first, last, middle;
	printf("enter range:");
	scanf("%d",&n);
	printf("Enter elements (in ascending order): ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\nEnter element to be search: ");
	scanf("%d", &search);
	first = 0;
	last = n-1;
	middle = (first+last)/2;
	while(first <= last)
	{
		if(arr[middle]<search)
		{
			first = middle+1;
		}
		else if(arr[middle]==search)
		{
			printf("\nThe number, %d found at Index Position %d", search, middle);
			break;
		}
		else
		{
			last = middle-1;
		}
		middle = (first+last)/2;
	}
	if(first>last)
	{
		printf("\nThe number, %d is not found in given Array", search);
	}
	return 0;
}
