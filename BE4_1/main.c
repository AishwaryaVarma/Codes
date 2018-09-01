#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define LAMDA 0.001
int main()
{
    double relblty;
    printf("GRAPH \n");

    for(float t=0;t<=3000;t+=100)
    {
        relblty=exp(-(LAMDA*t));
        float plotr=(relblty*75)+0.5;
        float i=0;
        while(i<=plotr)
       { printf("*");
       i++;
       }
       printf("# \n");
    }
    return 0;
}
