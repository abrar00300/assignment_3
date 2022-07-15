#include<stdio.h>
int main()
{
    int n;
    printf("enter your number =");
    scanf("%d",&n);
    if(n%3==0 || n%7==0)
        printf("number is divisible by 3 or 7");
    else
        printf("number is not divisible by  3 or 7");
}
