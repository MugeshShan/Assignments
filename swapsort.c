#include<stdio.h>
int main()
{
	int a[20],temp[20],i,j=0,n,half;
	printf("\nEnter the number of elements : ");
	scanf("%d",&n);
	printf("\nEnter the array elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	half=n/2;
	if(n%2==0)
	{
		for(i=half,j=0;i<n;i++,j++)
		{
			temp[j]=a[i];
		}
		for(i=0;i<half;i++,j++)
		{
			temp[j]=a[i];
		}
	}
	else
	{
		for(i=half+1,j=0;i<n;i++,j++)
		{
			temp[j]=a[i];
		}
		temp[half]=a[half];
		j++;
		for(i=0;i<half;i++,j++)
		{
			temp[j]=a[i];
		}
	}	
	printf("\nThe exchanged array is : ");
	for(i=0;i<n;i++)
	{
		printf(" %d ",temp[i]);
	}
	return 0;
}
