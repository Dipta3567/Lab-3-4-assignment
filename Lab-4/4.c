#include<stdio.h>
int main()
{
    int a,b,row=0,col=0,row1=0,col1=0,i,j;
    scanf("%d %d", &a, &b);
    int arr[a][b];
    for (i=0;i<a;i++)
    {
        for (j=0;j<b;j++)
        {
            scanf("%d", &arr[i][j]);
        }

    }
    for (i=0;i<a;i++)
    {
        row1=0;
        for (j=0;j<b;j++)
        {
            row+=arr[i][j];
            row1+=arr[i][j];
        }
        printf("Sum of row %d = %d\n",i+1,row1);

    }
    printf("\n");
    for (i=0;i<b;i++)
    {
        col1=0;
        for (j=0;j<a;j++)
        {
            col+=arr[j][i];
            col1+=arr[j][i];
        }
            printf("Sum of colomn %d = %d\n", i+1,col1);
    }
    printf("\nTOTAL ROW SUM = %d\n",row);
    printf("TOTAL COLUMN sum = %d\n", col);
    return 0;
}
