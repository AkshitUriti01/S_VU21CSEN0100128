// finding compound interest
#include <stdio.h>
#include <math.h>

int main() {
    float p,t,r;
    printf("Enter principal, time, rate: ");
    scanf("%f %f %f", &p, &t, &r);

    float CI = p * pow(1+(r/100), t);
    printf("Compound Interest: %.2f", CI);

    return 0;
}
