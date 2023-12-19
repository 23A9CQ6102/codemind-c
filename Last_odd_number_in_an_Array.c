#include<stdio.h>
int main()
{
    int n,s;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]%2!=0)
        {
            s=arr[i];
            break;
        }
    }
    printf("%d",s);
}