#include <stdio.h>

int main() {
    float principal, rate, time, interest;
    printf("Enter Principal Amount: ");
    scanf("%f", &principal);
    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);
    printf("Enter Time in Years: ");
    scanf("%f", &time);
    interest = (principal * rate * time) / 100;
    printf("The Simple Interest is: %.2f\n", interest);
    return 0;
}
