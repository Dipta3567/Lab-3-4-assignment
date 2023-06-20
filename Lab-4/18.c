#include<stdio.h>
int main()
{
    int i,n,rem,base=1,dec=0;
    scanf("%d", &n);
    while (n>0)
    {
        rem=n%10;
        dec+=rem*base;
        n/=10;
        base*=2;
    }
    printf("Decimal: %d\n",dec);
    return 0;
}
