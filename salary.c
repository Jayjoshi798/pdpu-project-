#include<stdio.h>
int main(){
    float a,b,c;
    printf("enter the value of gross salary=");
    scanf("%f",&a);
    
    b=a/10;
    c=a*3/100;
    printf("your net salary is =%f",a+b-c);
    
    return 0;
}
