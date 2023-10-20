#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a==0||a%3==0) printf("NORMAL");
    else if (a==1||a%4==0) printf("HUGE");
    else  printf("SMALL");
}