#include<stdio.h>
int main(){
    float a,b;
    printf("enter the value of gross sales=");
    scanf("%f",&a);
    
    b=a/10;
    printf("your net salary is =%f",a-b);
    
    return 0;
}