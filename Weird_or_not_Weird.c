#include<stdio.h>
int main()
{ 
    int n;
    scanf("%d",&n);
    if(n%2!=0) printf("weird");
    else if(2<n%2==0<5) printf("not weird");
    else if (6<n%2==0<20) printf("weird");
    else if(n%2==0>20) printf("not weird");
    
}