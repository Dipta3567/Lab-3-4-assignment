#include<stdio.h>
int main()
{
    char s1[1000],s2[1000];
    gets(s1);
    gets(s2);
    int cnt=1,len1=0,len2=0,i;
    for (i=0;s1[i]!='\0';i++)
    {
        len1++;
    }
    for (i=0;s2[i]!='\0';i++)
        len2++;
    if (len1==len2)
    {
        for (i=0;s1[i] !='\0';i++)
        {
            if (s1[i]!=s2[i])
            {
                cnt=0;
                printf("String not same\n");
                return 0;
            }
            else
                continue;
        }
    }
    else
        printf("String not same\n");
    if (cnt==1)
        printf("Strings are same\n");
    return 0;
}
