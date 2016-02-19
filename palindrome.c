#include<stdio.h>
int main()
{
	int i,p,n,rev=0;
	printf("Enter the number.....");
	scanf("%d",&n);
	while(n)
	{
		p=++n;
		while(n>0)
		{
			rev=(rev*10)+n%10;
			n=n/10;
		}
		if(rev==p)
		{
			
			printf("The next palindrome is %d\n",rev);
			break;
		}
		else
		{
			rev=0;
			n=p;
		}
	}
	return 0;
}
