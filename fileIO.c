#include<stdio.h>
#include<stdlib.h>
struct students
{
	int serial_no;
	char name[50];
	int mark[5];
}*stu;
int main()
{
	float avg[5]={0};
	char title[7][30],*top[5];
	int n=0,i,j,max;
	char ch;
	FILE *fp;
	fp=fopen("final.csv","r");
	if(fp!=NULL)
	{
		ch=fgetc(fp);
		while(ch!=EOF)
		{
			if(ch=='\n')
			{
				n++;
			}
			ch=fgetc(fp);
		}
		n--;
		stu=(struct students *)malloc(n*sizeof(struct students));
		rewind(fp);
		for(i=0;i<6;i++)
		{
			fscanf(fp,"%[^,],",title[i]);
		}
		fscanf(fp,"%[^\n]",title[i]);
		for(i=0;i<n;i++)
		{
			fscanf(fp, "%d,%[^,],%d,%d,%d,%d,%d",&stu[i].serial_no,stu[i].name,&stu[i].mark[0],&stu[i].mark[1],&stu[i].mark[2],&stu[i].mark[3],&stu[i].mark[4]);
		}
		for(i=0;i<5;i++)
		{
			for(j=0;j<n;j++)
			{
				avg[i]=stu[j].mark[i]+avg[i];
			}
			avg[i]=avg[i]/n;
		}
		for(i=0;i<5;i++)
		{
			printf("%s : %f\n",title[i+2],avg[i]);
		} 
		for(i=0;i<5;i++)
		{
			max=0;
			for(j=0;j<n;j++)
			{
				if(max<stu[j].mark[i])
				{
					max=stu[j].mark[i];
					top[i]=stu[j].name;
				}
			}
		}
		printf("Top scorers:\n");
		for(i=0;i<5;i++)
		{
			printf("%s : %s\n",title[i+2],top[i]);
		}
	}
	return 0;
}
