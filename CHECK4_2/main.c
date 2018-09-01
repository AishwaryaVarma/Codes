#include<stdlib.h>
#include<stdio.h>

int main()
{
    char i[15];
    printf("Enter the string: \n");
    scanf("%15s",i);
    printf("%-15s",i);

    return 0;
}
