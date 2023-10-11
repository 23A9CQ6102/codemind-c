#include<stdio.h>
int main()
{
    float f;
    scanf("%f",&f);
    if(f<150){
        printf("The person is Dwarf.");
    }
    else if(f>150&&f<=165){
        printf("The person is average heighted.");
    }
    else if(f>165&&f<=195){
        printf("The person is taller.");
    }
    else{
        printf("Abnormal height.");
    }
}