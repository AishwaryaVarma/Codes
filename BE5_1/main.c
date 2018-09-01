#include<stdio.h>
#include<stdlib.h>

int main()
{
    int max,count=1;
    float price,max_price,min_price,avg_price,range,sum=0;
    printf("Enter No. of data collected:\t");
    scanf("%d",&max);
    printf("enter prices:\n");
    for(int i=0;i<max;i++)
    {
        scanf("%f",&price);
        if(price==0)
        break;
        else
        {
            sum+=price;
            count++;
            if(count==2)
            {
                max_price=min_price=price;
            }
            else
            {
                if(price<min_price)
                min_price=price;
                else if(price>max_price)
                max_price=price;
            }
        }
   }
            avg_price=sum/max;
            range=max_price-min_price;

            printf("Average price is:\t%f and \nRange is:\t%f",avg_price,range);

            return 0;
}
