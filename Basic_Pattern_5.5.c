#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
         for(int k=1;k<=n-i;k++)
        {
            printf("*");
        }
        for(int j=n;j>n-i;j--)
        {
            printf("%d",i);
        }
       
        printf("
");
            }
}