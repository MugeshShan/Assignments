#include<stdio.h>
int main()
{
	int number,p;
	printf("Ënter the n");
	scanf("%d",&number);
	if(number<0)
	{
	 printf("The number is negative ");
	 return 0;
	}		
	p=prime(number);
	printf("The next prime number from %d is %d",number,p);
	return 0;
}
int prime(int n)
{
	int i,flag=1,c,a;
	if(n<2)
	{
		return 2;
	}
	while(flag>0)
	{
		n++;
		c=0;
		a=n/2;
		for(i=2;i<=a;i++)
		{
			if(n%i==0)
			{
				c=1;
				flag=1;
			}
		}
		
		if(c==0)
		{
			flag=0;
		}
	}
	return n;	
}
			
