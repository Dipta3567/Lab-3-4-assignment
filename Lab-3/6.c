#include<stdio.h>
int main()
{
    int i,x,a=1;
    scanf("%d", &x);
    for (i=1;i<=x;i++)
        a*=i;
    printf("%d\n",a);
    return 0;
}
