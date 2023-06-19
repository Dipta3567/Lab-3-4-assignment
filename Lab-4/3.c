#include<stdio.h>
int main()
{
    int i,j,a,b;
    scanf("%d %d", &a, &b);
    int arr[a][b];
    for (i=0;i<a;i++)
    {
        for (j=0;j<b;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i=0;i<b;i++)
    {
        for (j=0;j<a;j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
