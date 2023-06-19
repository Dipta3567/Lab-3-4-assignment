#include<stdio.h>
int main()
{
    int a,b,r=100,temp,i;
    scanf("%d %d", &a, &b);
    for (i=1;r!=0;i++)
    {
        r=a%b;
        if (r!=0)
        {
            a=b;
            b=r;
        }
    }
    printf("%d\n", b);
}
