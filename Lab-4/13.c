#include<stdio.h>
int main()
{
    int i,j;
    char s1[1000],s2[1000];
    gets(s1);
    gets(s2);
    printf("String 1: %s\nString 2: %s\n\n",s1,s2);
    for (i=0;s1[i] !='\0';i++)
        continue;
    for (i,j=0;s2[j]!='\0';i++,j++)
    {
        s1[i]=s2[j];
    }
    s1[i]='\0';
    printf("String 1 after concrating with string 2: %s\n",s1);
    return 0;
}
