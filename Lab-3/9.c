#include<stdio.h>
int fibb(int x)
{
    if (x==1)
        return 0;
    else if (x==2)
        return 1;
    return fibb(x-1)+fibb(x-2);


}
int main()
{
    int x,y;
    scanf("%d", &x);
    y=fibb(x);
    printf("%d\n", y);
    return 0;

}
