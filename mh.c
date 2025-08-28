#include <stdio.h>
int main() {
    float h;
    printf("Enter time in min: ");
    scanf("%f", &h);

    float c = h / 60;
    printf("Your time in hours = %f", c);
    return 0;
}
