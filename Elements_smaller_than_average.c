 //Elements smaller than average
#include<stdio.h>
int main()
{
    int n,sum=0,c=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int avg=sum/n;
    for(int i=0;i<n;i++)
    {
        if(avg>=arr[i])
        {
            c++;
        }
    }
    printf("%d",c);
}