#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("enter sides of triangle = \n");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1+s2>s3 && s1+s3>s2 && s2+s3>s1)
        printf("it is a triangle ");
    else
        printf("it is not a triangle");
}
