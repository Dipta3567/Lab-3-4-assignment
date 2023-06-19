#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],p[1000];
    fgets(s,1000,stdin);
    FILE *a;
    a=fopen("TEST.DAT", "w");
    fprintf(a, "%s", s);
    fclose(a);
    a=fopen("TEST.DAT","r");
    fgets(p,1000,a);
    fclose(a);
    printf("%s\n", p);
    return 0;
}
