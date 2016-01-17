#include<stdio.h>
#include<math.h>

int main()
{
        int a[10],b[10],size,i,power;
        int num,max=1,n,rev=0,j,x=0;
        scanf("%d",&size);
        for(i=0;i<size;i++)
                scanf("%d",&a[i]);
        power=pow(2,size);
        max=power-1;
        printf("The subsets are:\n");      
         // to get revese of a binary number
        for(num=1;num<max;num++)
        {
                j=0;
                i=0;
                n=num;
                while(n>0)
                {
                        b[j]=n%2;  //remainder is either 0 or 1
                        n=n/2;
                        j++;
                }
           
                    // to print the subset
                for(i=0;i<size;i++)
                {
                        if(b[i]==1)
                        {
                                printf("%d",a[i]);
                        }         
                }
                printf("\n");
        }
        return 0;
}
