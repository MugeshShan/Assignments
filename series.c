#include<stdio.h>
int main()
{
	int s,d,n,i;
	char type[2];
	printf("Enter the starting of the series...");
	scanf("%d",&s);
	printf("Enter the difference or common ratio.......");
	scanf("%d",&d);
	printf("Enter the no.of terms....");
	scanf("%d",&n);
	printf("Enter the type of series is....");
	scanf("%s",type);
	switch(type[0])
	{
		case 'A':
		case 'a':
					printf("The %s series is......\n",type);
					for(i=0;i<n;i++)
					{
						printf("%d\t",s);
						s=s+d;
					}
					printf("\n");
					break;
				
		case 'G':
		case 'g':
					printf("The %s series is........\n",type);
					for(i=0;i<n;i++)
					{
						printf("%d\t",s);
						s=s*d;
					}
					printf("\n");
					break;
	}
	return 0;
	
}
