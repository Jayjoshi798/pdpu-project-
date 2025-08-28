#include<stdio.h>
int main(){
    float a;
    printf("enter the value of bytes");
    scanf("%f",&a);

    printf("your value in gb  %f",a/1000000000);
    return 0;
}