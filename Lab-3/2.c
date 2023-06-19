#include<stdio.h>
int main()
{
    int i,j,k;
    for (i=1;i<=3;i++)
    {
        for (j=1;j<=5;j++)
            printf("* ");
        for (k=1;k<=5;k++)
            printf("- ");
        printf("\n");
    }
    for (i=1;i<=3;i++)
    {
        for (j=1;j<=10;j++)
            printf("- ");
        printf("\n");
    }
    return 0;
}
