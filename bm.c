#include<stdio.h>
int main(){
    float a;
    printf("enter the value of bytes");
    scanf("%f",&a);

    printf("your value in mb  %f",a/1000000);
    return 0;
}