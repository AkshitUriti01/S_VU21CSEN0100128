// finding simple interest
#include <stdio.h>

int main() {
    float p,r,t;
    printf("Enter principal, rate, time: ");
    scanf("%f %f %f", &p, &r, &t);

    float si = (p*t*r)/100;
    printf("Simple Interest= %.2f", si);

    return 0;
}
