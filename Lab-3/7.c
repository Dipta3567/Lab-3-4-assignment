#include<stdio.h>
int fact(int x)
{
    int total;
    if (x==1)
        return 1;
    total=x*fact(x-1);
    return total;
}
int main()
{
    int x,y;
    scanf("%d", &x);
    y=fact(x);
    printf("%d\n",y);
    return 0;
}

