#include<stdio.h>
int main()
{
    int n,r,cs=0,cp=1;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        cs=cs+r;
        cp=cp*r;
        n=n/10;
    }
        {
            if (cs==cp)
            printf("Spy Number");
            else
            printf("Not Spy Number");
        }
    
}