#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    int i,j,len,flag=1;
    scanf("%s", arr);
    len=strlen(arr);
    for (i=0,j=len-1;arr[i] !='\0';i++,j--)
    {
        if (arr[i]!=arr[j])
        {
            flag=0;
            break;
        }

    }
    if (flag==1)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");
    return 0;
}
