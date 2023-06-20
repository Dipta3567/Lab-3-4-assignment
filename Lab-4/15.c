#include<stdio.h>
int main()
{
    char s[1000],r[1000];
    int i,j;
    gets(s);
    for (i=0;s[i] !='\0';i++)
        continue;
    i--;
    for (i,j=0;i>=0;i--,j++)
        r[j]=s[i];
    r[j]='\0';
    printf("string : %s\n\n",s);
    printf("Reversed : %s\n",r);
    return 0;
}
