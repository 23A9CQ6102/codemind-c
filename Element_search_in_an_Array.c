#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sn,found=0;
    scanf("%d",&sn);
    for(int i=0;i<n;i++)
    {
       if(sn==arr[i])
       {
           found=1;
           break;
       }
    }
    
    if(found==1) printf("True");
    else printf("False");
    
}