#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num[5];
    int x;

    for(int i=0;i<5;++i)
    {
        printf("Enter the number of employees in Group %d:\t",i+1);
        scanf("%d",&x);
        num[i]=x;
    }

    for(int j=0;j<5;++j)
    {

       for(int k=1;k<=3;k++)
       {

          if(k==2)
          printf("Group %d|",j+1);
          else
          printf("       |");
            for(int n=1;n<=num[j];++n)
            {
                printf("*");
            }
            printf("\n");
        }
       printf("       |\n       |\n");
    }
    return 0;
}
