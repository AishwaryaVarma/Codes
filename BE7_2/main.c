#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n;
    float num[n],mean,variance,st_dev;
    float sum,term;
    sum=term=0;

    printf("Enter the value of n:\t");
    scanf("%d",&n);
    printf("Enter the Values continuously:\n\n");

    for(int i=0;i<n;i++)
    {
        scanf("%f",&num[i]);
        sum+=num[i];
    }

    mean=sum/n;
    for(int j=0;j<n;j++)
    {
        term+=(num[j]-mean)*(num[j]-mean);
    }

    variance=term/n;
    st_dev=sqrt(variance);

    printf("Mean= %f\n",mean);
    printf("Variance= %f\n",variance);
    printf("standard deviation= %f",st_dev);

    return 0;
}
