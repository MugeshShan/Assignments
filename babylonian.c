#include<stdio.h>
int main()
{
	float number,num,x=1;
	float error=0.000000001;
	printf("Enter the positive number......");
	scanf("%f",&number);
	num=number;
	while((num - x) > error)
	{
		num=(num + x)/2;
		x=number/num;
	}		
 	printf("The square root of a number %f is %f",number,num);
	return 0;
}
