
#include <stdio.h>
#include <math.h>

int main() {
    float p,t,r;
    printf("Enter P,T,R: ");
    scanf("%f %f %f", &p, &t, &r);
    
    printf("Compound Interest= %.3f", p*pow((1+r/100), t));

    return 0;
}
