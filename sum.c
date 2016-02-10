#include<stdio.h>
int add(int,int,int);
int main()
{
	int a,b,c,sum=0,arr[10];
	printf("Enter the three numbers........");
	scanf("%d%d%d",&a,&b,&c);
	printf("\nNORMAL SUM........\n");
	sum=a+b+c;
	printf("\n Sum is...%d\n",sum);
	printf("\nUSING ARRAY......\n");
	arr[0]=a;
	arr[1]=b;
	arr[2]=c;
	sum=arr[0]+arr[1]+arr[2];
	printf("\n Sum is...%d\n",sum);
	printf("\nUSING FUNCTION CALL......\n");
	sum=add(a,b,c);
	printf("\n Sum is...%d\n",sum);
	return 0;
}
int add(int x,int y,int z)
{
	return(x+y+z);
}
