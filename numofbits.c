#include<stdio.h>
#include<math.h>
int main()
{
	int n,rev=0,b[10],i=0,j,a,count=0;
	printf("Enter the n........");
	scanf("%d",&n);
	a=n;
	while(n>0)
	{
	   b[i]=n%2;
	   n=n/2;
	   count++;
	   i++;
	}
	printf("The binary form of a number %d is ",a);
	for(j=i-1;j>=0;j--)
	{
	   printf("%d",b[j]);

	}
	printf("\nThe number of bits in a binary number of %d is %d",a,count);
	printf("\n");
	return 0;
}
