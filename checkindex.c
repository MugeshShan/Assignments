#include<stdio.h>
int main()
{
	int a[20],i,j,n,x,index=-1;
	printf("Enter the number of elements.........");
	scanf("%d",&n);
	printf("Enter the array elements.............");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number.........");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(x<a[i])
		{
			if(a[i]<a[i+1])
			{
				index=i;
				break;
			}
			else if(a[i] == a[i+1])
			{
				index=i+1;
				break;
			}	
		}
	}
	printf("%d",index);
	return 0;
}
