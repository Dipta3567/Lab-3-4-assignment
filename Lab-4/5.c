#include<stdio.h>
int main()
{
    int arr1[100][100],arr2[100][100],arr[100][100],a,b,c,d,i,j;
    scanf("%d %d", &a, &b);
    for (i=1;i<=a;i++)
    {
        for (j=1;j<=b;j++)
            scanf("%d", &arr1[i][j]);
    }
    scanf("%d %d", &c, &d);
    if (a==c && b==d)
    {
        for (i=1;i<=c;i++)
        {
            for (j=1;j<=d;j++)
            {
                scanf("%d", &arr2[i][j]);
                arr[i][j]=arr1[i][j]+arr2[i][j];
            }
        }
        for (i=1;i<=a;i++)
        {
            for (j=1;j<=b;j++)
                printf("%d ", arr[i][j]);
            printf("\n");
        }
    }
    else
        printf("Table row and column did not match\n");
    return 0;
}
