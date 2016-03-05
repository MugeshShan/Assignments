#include<stdio.h>
int main()
{
	char a[50];
	int i,count[26]={0},j,x=0;
	printf("Enter the equation........");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A'&& a[i]<='Z')
		{
			j=a[i]-'A';
			if(count[j]==0)
			{
				count[j]=1;
				x++;
			}
		}
	}
	
	printf("%d",x);
	return 0;
}
