#include<stdio.h>
#include<stdlib.h>

#define RENT 0.25
int main()
{
    int jb_num,level,conv_allwnce,entm_allwnce;
    float basic_pay,gross_sal,net_sal,tax;
    printf("Enter 1.JOB NUMBER\t2.LEVEL \t3.BASIC PAY\n\n");
    scanf("%d %d %f",&jb_num,&level,&basic_pay);
    switch(level)
    {
        case 1:conv_allwnce=1000;
               entm_allwnce=500;break;

        case 2:conv_allwnce=750;
               entm_allwnce=200;break;

        case 3:conv_allwnce=500;
               entm_allwnce=100;break;

        case 4:conv_allwnce=250;
               entm_allwnce=0;break;
    };
    gross_sal=(basic_pay+(basic_pay*RENT)+conv_allwnce+entm_allwnce);

    if(gross_sal<=2000)
    {
        tax=0;
        net_sal=gross_sal-(gross_sal*tax);
    }
    else if(gross_sal>2000&&gross_sal<=4000)
    {
        tax=0.03;
        net_sal=gross_sal-(gross_sal*tax);
    }
    else if(gross_sal>4000&&gross_sal<=5000)
    {
        tax=0.05;
        net_sal=gross_sal-(gross_sal*tax);
    }
    else if(gross_sal>5000)
    {
        tax=0.08;
        net_sal=gross_sal-(gross_sal*tax);
    }

    printf("\nNET SALARY:\t%f",net_sal);
    return 0;
}
