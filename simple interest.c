#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    // Get user input for Principal, Rate, and Time
    printf("Enter Principal Amount: ");
    scanf("%f", &principal);
    
    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);
    
    printf("Enter Time in Years: ");
    scanf("%f", &time);

    // Calculate Simple Interest
    interest = (principal * rate * time) / 100;

    // Output the result
    printf("The Simple Interest is: %.2f\n", interest);

    return 0;
}
