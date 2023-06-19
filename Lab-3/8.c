#include<stdio.h>
int main()
{
    int i,x,num1=0,num2=1,sum=0;
    scanf("%d", &x);
    if (x==1)
        printf("0\n");
    else if (x==2)
        printf("1\n");
    else
    {
        for (i=3;i<=x;i++)
        {
            sum=num1+num2;
            num1=num2;
            num2=sum;
        }
        printf("%d\n",sum);
    }
    return 0;
}
