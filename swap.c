#include<stdio.h>
int main(){
    float a,b,c;

    printf("enter the value of a");
    scanf("%f",&a);

    printf("enter the value of b");
    scanf("%f",&b);

    c=a;
    a=b;
    b=c;

    printf("after swaping the value of a=%f\n",a);
    printf("after swaping the value of b=%f",b);
    return 0;
}

