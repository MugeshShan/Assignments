#include<stdio.h>
int inarray(int [],int,int);
int main()
{
	int a[20],i,n,number;
	printf("Enter the no.of elements......");
	scanf("%d",&n);
	printf("Enter the numbers......\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number to find the index in array......");
	scanf("%d",&number);
	i=inarray(a,n,number);
	printf(" %d\n",i);
	return 0;
}
int inarray(int arr[],int size,int num)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(arr[i]==num)
		{
			return i;
		}
	}
	return -1;
}
