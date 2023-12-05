#include<stdio.h>
int main()
{
    int n,a=0,b=1,c=a+b;
    scanf("%d",&n);
    if(n==0) printf("True");
     if(n==1) printf("True");
     while(c<n)
     {
         a=b;b=c;c=a+b;
     }
     if(c == n) printf("True");
     else printf("False");
}