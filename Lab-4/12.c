#include<stdio.h>
int main()
{
    char s1[1000],s2[1000];
    int i;
    gets(s1);
    for (i=0;s1[i] !='\0';i++)
        s2[i]=s1[i];
    s2[i]='\0';
    printf("string 1: %s\n\n",s1);
    printf("String 2: %s\n", s2);
    return 0;
}
