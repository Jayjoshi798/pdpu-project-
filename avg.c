#include <stdio.h>

int main() {
    float a,b,c, total, avg;

    printf("Enter marks of subject 1: ");
    scanf("%f", &a);

    printf("Enter marks of subject 2: ");
    scanf("%f", &b);

    printf("Enter marks of subject 3: ");
    scanf("%f", &c);

    total = a+b+c;
    avg = total / 3;

    printf("\nTotal Marks = %f", total);
    printf("\nAverage Marks = %f\n", avg);

    return 0;
}