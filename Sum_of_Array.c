#include<stdio.h>
int main()
{
    int a,sum=0;
    scanf("%d",&a);
    int ar[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<a;i++)
    {
        sum+=ar[i];
    }
    printf("%d",sum);
}