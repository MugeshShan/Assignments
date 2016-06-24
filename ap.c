#include<stdio.h>
int main()
{
	int s,d,n,i;
	printf("Enter the starting of the series...");
	scanf("%d",&s);
	printf("Enter the difference.......");
	scanf("%d",&d);
	printf("Enter the no.of terms....");
	scanf("%d",&n);
	printf("The series is....\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\t",s);
		s=s+d;
	}
	return 0;
}
