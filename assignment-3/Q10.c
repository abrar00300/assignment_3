#include<stdio.h>
int main()
{
    int c,s;
    float r;
    printf("enter cost price =");
    scanf("%d",&c);
    printf("enter selling price=");
    scanf("%d",&s);
    if(s>c)
    {
        r=s-c;
        r=(r/c)*100;
        printf("profit percentage =%.2f%",r);
    }
    else if(s<c)
    {
        r=c-s;
        r=(r/c)*100;
        printf("loss percentage =%.2f%",r);
    }
}
