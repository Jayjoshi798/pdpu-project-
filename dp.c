#include<stdio.h>
int main(){
    float a;
    printf("enter money in dollars");
    scanf("%f",&a);
    printf("your money in pound: %.2f",a*48/70);
    return 0;
}