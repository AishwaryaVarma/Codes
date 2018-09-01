#include<stdio.h>
#include<stdlib.h>

int main()
{
    float binom;
    printf("m|x");

    for(int i=0;i<=10;i++)
    {
        printf("      %d",i);
    }
    printf("\n");
    for(float m=0;m<=10;m++)
    {
        printf("%2.0f",m);
        binom=1;
      for(float x=0;x<=10;x++)
      {

        if((x==0||m==0)&&(x<=m))
        {
            binom=1;
            printf("    %3.0f",binom);
        }
        else if(x<=m)
        {
            binom=binom*(((m-x)+1)/x);
            printf("    %3.0f",binom);

        }
      }

    printf("\n");
    }
}
