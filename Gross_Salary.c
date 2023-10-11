#include<stdio.h>
int main()
{
    int a,d,h;
    scanf("%d",&a);
 
    if (a<=10000) printf("%.2f",a+a*(0.8)+a*(0.2));

else if (a<=20000) printf("%.2f",a+a*(0.90)+a*(0.25));
 else if(a>20000) printf("%.2f",a+a*(0.95)+a*(0.30));
}