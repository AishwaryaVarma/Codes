#include<stdio.h>
#include<stdlib.h>

int main()
{
    float cost,min_cost,x;
    for(float p=0;p<=10;p+=0.1)
    {
        cost=((p*p)-(8*p)+40);

        if(p==0)
        min_cost=cost;

        else if(cost<min_cost)
        {
            min_cost=cost;
            x=p;
        }
    }
printf("\nMinimum cost of operation = %f for p = %f\n",min_cost,x);

return 0;
}
