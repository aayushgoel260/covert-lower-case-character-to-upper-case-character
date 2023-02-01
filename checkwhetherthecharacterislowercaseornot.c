#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    if (c>64 && c<91)    //(c>=97 && c<=122)        //(c>='a' && ch<='z')
    {
        printf("Uppercase");
    }
    else
    {
        printf("Lowercase");
    }
    return 0;
}