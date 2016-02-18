#include<stdio.h>
void print();
void count();
int a[6][6];
int main()
{
	a[0][5]=-1;
	a[1][2]=-1;	// bomb was indicated by -1
	a[2][0]=-1;
	a[3][3]=-1;
	a[4][1]=-1;
	a[5][4]=-1;
	print();
	count();
	return 0;
}
void print() // for printing
{
	int i,j;
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
void count()
{
	int i,j;
	printf("Count of the bomb surrounded \n");
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			if(a[i][j]==0)
			{
			
				if((a[i][j-1]==-1)&&(j!=0))
				{
					a[i][j]++;
				}
				if((a[i][j+1]==-1)&&(j!=5))
				{
					a[i][j]++;
				}
				if((a[i+1][j]==-1)&&(i!=5))
				{
					a[i][j]++;
				}
				
				if((a[i-1][j]==-1)&&(i!=0))
				{
					a[i][j]++;
				}
			
				if((a[i-1][j-1]==-1)&&(j!=0)&&(i!=0))
				{	
					a[i][j]++;
				}
				if((a[i-1][j+1]==-1)&&(j!=5)&&(i!=0))
				{
					a[i][j]++;
				}
				if((a[i+1][j-1]==-1)&&(j!=0)&&(i!=5))
				{
					a[i][j]++;
				}
				if((a[i+1][j+1]==-1)&&(j!=5)&&(i!=5))
				{
					a[i][j]++;
				}
			}
		}
	}
	print();//to print the count;
	
}
