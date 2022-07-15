#include<stdio.h>
int main()
{
    int t=0,m;
    printf("enter marks of 1 subject=");
    scanf("%d",&m);
    t=t+m;
     printf("enter marks of 2  subject=");
    scanf("%d",&m);
    t=t+m;
     printf("enter marks of  3 subject=");
    scanf("%d",&m);
    t=t+m;
     printf("enter marks of 4 subject=");
    scanf("%d",&m);
    t=t+m;
     printf("enter marks of 5 subject=");
    scanf("%d",&m);
    t=t+m;
    if(t>33)
        printf("PASS");
    else
        printf("FAIL");
}
