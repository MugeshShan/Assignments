#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
    char wish[]="HAPPY PONGAL";
    int i;
    while(1)//infinite loop for wishing
    {
        system("clear");
        for(i=0;wish[i]!='\0';i++)
        {
           
            printf("%c",wish[i]);
            usleep(1000);
        }
    }
    return 0;
}
