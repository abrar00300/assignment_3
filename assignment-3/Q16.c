#include<stdio.h>
int main()
{
    char c;
    printf("enter character= ");
    scanf("%c",&c);
    if(c>=97 && c<=122)
        printf("character is lowercase alphabet");
    else if(c>=65 && c<=90)
        printf("character is uppercase alphabet");
    else if(c>=45 && c<=56)
        printf("character is digit ");
    else
        printf("character is special digit");
}
