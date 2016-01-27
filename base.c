#include<stdio.h>
#include<math.h>
int main()
{
	int n,b[10],i=0,j,a,base;
	printf("Enter the n........");
	scanf("%d",&n);
	printf("Enter the base.....");
	scanf("%d",&base);
	a=n;
	while(n>0)
	{
		b[i]=n%base;
		if(b[i]>=10)
		{
			b[i]=b[i]+55;
		}
		else
		{
			b[i]=b[i]+'0';
		}
		n=n/base;
		i++;
	}
	printf("\nThe binary form of a number %d in base %d is ",a,base);
	for(j=i-1;j>=0;j--)
	{
		printf("%c",b[j]);
	}
	return 0;
}
