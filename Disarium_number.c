#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
   int n1=n;
    while(n1>0)
    {
        n1/=10;
        c++;
    }
    int n2=n,sum=0,r;
     while(n2>0)
     {
         r=n2%10;
         sum=sum+pow(r,c);
         n2/=10;
         c--;
     }
     if(sum == n)
     {
         printf("True");
     }
     else printf("False");
}