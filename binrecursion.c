#include<stdio.h>
int mid;
int binarysearch(int [],int,int,int);
int main()
{
	int a[10],i,key,n,index;
	printf("Enter the no.of terms.....");
	scanf("%d",&n);
	printf("Enter the array elements....");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the key element...");
	scanf("%d",&key);
	index=binarysearch(a,key,0,n);
	printf("%d\n",index);
	return 0;
}
int binarysearch(int a[],int k,int s,int e)
{
	if(s<=e) 
	{
		mid = (s+e)/2;
		if (a[mid] > k)
		{
			binarysearch(a,k,s,mid-1);
			   
		}
		else if (a[mid] == k) 
		{
			return mid;
		}
		else
		{
			binarysearch(a,k,mid+1,e);
		}
	}
	else
	{
		return -1;
	}	
}
