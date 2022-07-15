#include<stdio.h>
int main()
{
    int n;
    printf("enter year  =");
    scanf("%d",&n);
    if(n%4==0)
        printf("%.4d is a leap year",n);
    else
        printf("%.4d is not a leap year",n);
}
