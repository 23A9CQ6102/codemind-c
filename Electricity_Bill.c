#include<stdio.h>
int main()
{
    int a;
    float b,c,d,s;
    scanf("%d",&a);
    if (a<=199)
    {
        c=1.20;
        b=a*c;
    }
    else if (a>=200&&a<400)
    {
        c=1.40;
        b=a*c;
    }
    else if (a>=400&&a<600)
    {
        c=1.60;
        b=a*c;
    }
    else if (a>=600&&a<800)
    {
        c=1.80;
        b=a*c;
    }
    else if (a>=800)
    {
        c=2.00;
        b=a*c;
    }
    if (b>400)
    {
        s=b*0.15;
        b=a*c;
        d=a*c+s;
        printf("Units Consumed: %d
",a);
        printf("Cost per Unit: %.2f
",c);
        printf("Bill: %.2f
",b);
        printf("Surcharge: %.2f
",s);
        printf("Total Amount: %.2f",d);
    }
    else 
    {
        s=0.00;
        b=a*c;
        d=a*c+s;
        printf("Units Consumed: %d
",a);
        printf("Cost per Unit: %.2f
",c);
        printf("Bill: %.2f
",b);
        printf("Surcharge: %.2f
",s);
        printf("Total Amount: %.2f",d);
    }
}