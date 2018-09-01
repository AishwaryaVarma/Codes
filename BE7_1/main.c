#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x;
    printf("Enter the number of values:\t");
    scanf("%d",&x);

    float num[x],med1,med2,median;
    float temp;



    printf("Enter the values continuously:\n\n");

    for(int i=0;i<x;i++)
    {
        scanf("%f",&num[i]);

        {
            for(int j=i;j>=0;j--)
            {
                if(num[j-1]>num[j])
                {
                    temp=num[j-1];
                    num[j-1]=num[j];
                    num[j]=temp;
                }


            }
        }
    }

    printf("\n\n");

    for(int k=0;k<x;k++)
    {
        printf("%f\t",num[k]);
    }

    if(x%2==0)
    {
        med1=num[(x/2)];
        med2=num[((x)/2)-1];
        median=(med1+med2)/2;

        printf("Median is %f",median);
    }
    else if(x%2!=0)
    {
        median=num[(int)(x)/2];
        printf("Median is %f",median);
    }
    return 0;
}
