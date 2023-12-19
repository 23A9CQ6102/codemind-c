#include<stdio.h>
int main()
{
    int n,flag=0;
    int sum=0;
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
    float avg=sum/n;
    for(int i=0;i<n;i++)
    {
        if(avg==arr[i])
        {
            flag=1;
        }
    }
    if(flag==1) printf("True");
    else printf("False");
    
}