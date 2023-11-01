#include<stdio.h>
int main()
{
    int i,n,r,c=1;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        r=i;
        c=c*r;
    }
    printf("%d",c);
}