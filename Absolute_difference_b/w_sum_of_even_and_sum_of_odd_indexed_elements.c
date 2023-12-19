#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,sum1=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i+=2)
    {
        sum+=arr[i];
    }
    for(int i=1;i<n;i+=2)
    {
        sum1+=arr[i];
    }
    printf("%d",abs(sum-sum1));
    
}