#include<stdio.h>
int main()
{
	int n,mid,k,half=0,x,count=0,rev=0;
	printf("Enter the number.........");
	scanf("%d",&n);
	x=n;
	while(x>0)
	{
		x=x/10;
		count++;
	}
	if(count%2==0) 
	{
		half=count/2;
		while(half>0)
		{
			k=n%10;
			rev=k+(rev*10);
			n=n/10;
			half--;
		}
		x=rev;
		rev=0;
		while(x>0)
		{
			k=x%10;
			rev=k+(rev*10);
			x=x/10;
		}
		printf("The exchanged number is.....");
		printf("%d%d\n",rev,n);
	}
	else
	{
		half=count/2;
		while(half>0)
		{
			k=n%10;
			rev=k+(rev*10);
			n=n/10;
			half--;
		}
		x=rev;
		mid=n%10; // for extracting middle element
		n=n/10;
		rev=0;
		while(x>0)
		{
			k=x%10;
			rev=k+(rev*10);
			x=x/10;
		}
		printf("The exchanged number is.....");
		printf("%d%d%d\n",rev,mid,n);
	}
	return 0;
	
}
