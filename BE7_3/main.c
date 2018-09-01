#include<stdio.h>
#include<stdlib.h>

int main()
{
    char response[26],key[26];
    int correct[26];
    int i,k,count=0;
    printf("Enter the correct answerkey:\n");

    for(i=0;i<26;i++)
    {
        scanf("%c",&key[i]);
    }
    key[i]='\0';
    for(int j=1;j<=3;j++)
    {
        printf("\nEnter the response of student %d:",j);
        count=0;
        for(k=0;k<26;k++)
        {
            scanf("%c",&response[k]);

            if(response[k]==key[k])
            {
                count++;
                correct[k]=k+1;
            }

            else
            {
                correct[k]='\0';
            }
        }
        response[k]='\0';


        printf("\nnumber of correct responses is:%d",count);
        printf("\nthe following questions were answered correctly:\n");

        for(int m=0;m<26;m++)
        {
            printf("%d\t",correct[m]);
        }
        printf("\n");

    }
        return 0;
}
