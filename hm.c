#include <stdio.h>
int main() {
    float h;
    printf("Enter time in hours: ");
    scanf("%f", &h);

    float c = h * 60;
    printf("Your time in minutes = %f", c);

    return 0;
}
