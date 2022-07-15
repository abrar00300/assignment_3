#include<stdio.h>
int main()
{
    char c;
    printf("enter character= ");
    scanf("%c",&c);
    if(c>=97 && c<=122)
        printf("character is lowercase ");
    else if(c>=65 && c<=90)
        printf("character is uppercase ");
}
