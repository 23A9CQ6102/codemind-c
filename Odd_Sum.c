#include<stdio.h>
int main()
{
    int m,sum=0;
    scanf("%d",&m);
    int a[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++)
    {
        if(a[i]%2!=0)
        {
            sum+=a[i];
        }
    }
    printf("%d",sum);
}