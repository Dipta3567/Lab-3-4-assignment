#include<stdio.h>
int main()
{
    int a,b,r=100,i,cnt,c,d;
    scanf("%d %d", &a, &b);
    c=a;
    d=b;
    for (i=1;r!=0;i++)
    {
        r=a%b;
        if (r!=0)
        {
            a=b;
            b=r;
        }
    }
    cnt = (c*d)/b;
    printf("%d\n", cnt);
}

