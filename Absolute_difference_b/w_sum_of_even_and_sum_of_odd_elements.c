#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,s=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            sum+=arr[i];
        }
        else 
        {
            s+=arr[i];
        }
    }
    printf("%d",abs(sum-s));
}