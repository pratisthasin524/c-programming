#include <stdio.h>
#include <math.h>
int main() {
    float principal, rate, time, simpleInterest, compoundInterest;
    printf("Enter Principal Amount: ");
    scanf("%f", &principal);
    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);
    printf("Enter Time (in years): ");
    scanf("%f", &time);
    simpleInterest = (principal * rate * time) / 100;
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;
    printf("Principal = %.2f\n", principal);
    printf("Rate = %.2f%%\n", rate);
    printf("Time = %.2f years\n", time);
    printf("Simple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f", compoundInterest);
    return 0;
}