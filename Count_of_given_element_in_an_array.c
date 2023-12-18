#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sn,s=0;
    scanf("%d",&sn);
    for(int i=0;i<n;i++)
    {
       if(arr[i]==sn)
       {
           s++;
       }
    }
    printf("%d",s);
    
}