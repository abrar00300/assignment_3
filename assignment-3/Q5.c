#include<stdio.h>
int main()
{
    int n;
    printf("enter your number =");
    scanf("%d",&n);
    if(n>99 && n<1000)
        printf("number is three digit number");
    else
        printf("number is not three digit number");
}
