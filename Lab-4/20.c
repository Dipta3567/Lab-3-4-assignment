#include<stdio.h>
int main()
{
    int i,n,j,k;
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    {
        for (j=n;j>i;j--)
        {
            printf(" ");
        }
        for (k=1;k<=(2*i-1);k++)
        {
            printf("*");
        }

            printf("\n");
    }
    n--;
for (i=n;i!=0;i--)
{
    for (j=n;j>=i;j--)
        printf(" ");
    for (k=1;k<=(2*i-1);k++)
        printf("*");
    printf("\n");
}
    return 0;
}
