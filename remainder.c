// finding remainder without using % operator
#include <stdio.h>

int main() {
    int num1, num2, q, r;
    printf("Enter number 1 and number 2: ");
    scanf("%i %i", &num1, &num2);
    
    q = num1/num2;
    r = num1 - (q * num2);
    
    printf("Remainder= %i", r);
    
    return 0;
}
