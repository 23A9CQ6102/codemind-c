#include<stdio.h>
int main()
{
    int a,r,s=0; 
    scanf("%d",&a);
    while (a!=0)
    {
        r=a%10;
        s=s+r;
        a=a/10;
    }
    printf("%d",s);
}