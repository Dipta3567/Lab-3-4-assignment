#include<stdio.h>
#include<math.h>
int main()
{
    int arr[1000],i=0,n,cnt=-1;
    scanf("%d", &n);
    while (n!=0)
    {
        arr[i]=n%2;
        n/=2;
        i++;
        cnt++;
    }
    for (i=cnt;i>=0;i--)
        printf("%d",arr[i]);
    return 0;
}
