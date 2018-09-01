#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct stack
{
    int top;
    int stackele[100];
};

int pushntest(struct stack *,int);
int popntest(struct stack *);
int isempty(struct stack *);
int peek(struct stack *);

int main()
{
    int x,opt,y,ans=1;
    struct stack s;
    s.top=-1;
    while(ans)
    {
        printf("\n1.Push\n2.Pop\n3.Peek\n4.exit\nEnter the operation:\t");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1: printf("\nEnter the element to be pushed:\t");
                    scanf("%d",&y);
                    x=pushntest(&s,y);
                    if(x==0)
                        printf("\nOverflow\nCan't PUSH element");
                    break;
            case 2: x=popntest(&s);
                    if(x==0)
                        printf("nUnderflow\nNothing to POP!");
                    else
                        printf("\npopped out element is %d",x);
                    break;
            case 3: x=peek(&s);
                    printf("\nElement on top is %d",x);
                    break;
            case 4:exit(1);
            default:printf("\nWrong choice");
        }
    }
    return 0;
}

int pushntest(struct stack *ps,int x)
{
    if(ps->top==99)
        return 0;
    else
    {
        ps->stackele[++(ps->top)]=x;
    }
    return(1);
}

int popntest(struct stack *ps)
{
    if(isempty(ps))
        return 0;
    return(ps->stackele[(ps->top)--]);
}

int isempty(struct stack *ps)
{
    if(ps->top==-1)
    {
        return 1;
    }
    else
        return 0;
}
int peek(struct stack *ps)
{
    return(ps->stackele[ps->top]);
}
