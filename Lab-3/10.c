#include<stdio.h>
char str()
{
    char s;
    scanf("%c", &s);
    if (s !='\n')
        str();
    printf("%c", s);
}
int main()
{
    str();
    return 0;
}
