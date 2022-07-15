#include<stdio.h>
int main()
{
    int n;
    printf("enter your number =");
    scanf("%d",&n);
    if(n%3==0 && n%2==0)
        printf("number is divisible by 2 and 3");
    else
        printf("number is not divisible by 2 and 3");
}
