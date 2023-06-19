#include <stdio.h>
int main()
{
    char s[100];
    fgets(s, 100, stdin);
    for (int i = 0; s[i+1] !='\0'; i++)
    {
        if (s[i]=='Z')
            s[i]='A';
        else if (s[i]=='z')
            s[i]='a';
        else if (s[i]=='9')
            s[i]='0';
        else if ((s[i]>='A' && s[i]<='Y') || (s[i]>='a' && s[i]<='y') || (s[i]>='0' && s[i]<='8'))
            s[i]+=1;
        else
            s[i]='*';
    }

    printf("%s\n", s);
    return 0;
}
