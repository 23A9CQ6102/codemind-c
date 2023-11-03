#include<stdio.h>
int main()
{
    int i,m,n,c=0,d=0;
    scanf("%d%d",&m,&n);
    for (i=1;i<m;i++)
    {
        if (m%i==0)
        {
            c=c+i;
        }
    }
    for (i=1;i<n;i++)
    {
        if(n%i==0)
        {
            d=d+i;
        }
    }
    if(c==n && d==m)
    {
        printf("Amicable");
    }
    else
     {
        printf("Not Amicable");
    }
}