#include<stdio.h>
int main()
{
    int a,i,n,d,s=0;
    scanf("%d",&n);
    i=n*n;
    d=i;
    while(d!=0)
    {
        a=d%10;
        s=s+a;
        d=d/10;
    }
    if(n==s)
    {
        printf("Neon Number");
    }
    else 
     {
        printf("Not Neon Number");
    }
}