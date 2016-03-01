#include<stdio.h>
int main()
{
	int a[10],i,n,index,new;
	printf("Enter the n.......");
	scanf("%d",&n);
	printf("Enter the numbers....");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the index........");
	scanf("%d",&index);
	printf("Enter the new element to insert.......");
	scanf("%d",&new);
		for(i=n;i>=index;i--)
		{
			if(i==index)
			{
				a[i+1]=a[i];
				a[i]=new;
				break;
			}
			else
			{
				a[i+1]=a[i];
			}
		}
	
	for(i=0;i<=n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
	
