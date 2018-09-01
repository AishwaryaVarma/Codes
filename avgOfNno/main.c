#include <stdio.h>
#include <stdlib.h>

int main()
{   float calc(float y);
    float N;
    float avg;
    printf("enter last no.\n");
    scanf("%f",&N);
   avg=calc(N);
   printf("avg. of first  %f no. is  %f",N,avg);
    return 0;
}
 float calc(float y)
{
    int sum=0;
    float x;
    for(int i=0;i<=y;i=i+1)
    {
        sum=sum+i;

    }
    x=(sum)/y;
    return(x);
    }
