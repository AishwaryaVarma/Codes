#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    double a=0.4;
    double y1,x;
    double y2;
for(int k=1;k<=30;k++)
{
    if(k==15)
    printf("_Y_");
    else
    printf("___");
}
printf("\n");

for(int i=0;i<=5;i++)
{
       printf("|");

        x=i;
        y1=50*exp((-a)*x)+0.5;
        y2=50*exp(((-a)*(x*x))/2)+0.5;
        for(int j=1;j<=(int)y2;j++)
        {
            printf(" ");
        }
        printf("*");

        for(int i=1;i<=(int)y1;i++)
        {
            printf(" ");
        }
        printf("*\n");
}

return 0;
}
