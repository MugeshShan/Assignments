#include<stdio.h>
int main()
{
	int a,rev=0,n;
	printf("Enter the Number......\n");
	scanf("%d",&a);
	while(a>0)
	{
		n=a%10;
		rev=n+(10*rev);
		a=a/10;
	}
	printf("%d\n",rev);
	return 0;
}
