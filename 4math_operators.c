#include <stdio.h>

int main() {
    float a,b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    
    printf("\nSum=%.2f \nDifference=%.2f \nProduct=%.2f \nDivision=%.2f", 
            a+b, a-b, a*b, a/b);
    
    return 0;
}
