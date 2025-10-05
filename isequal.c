#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    if (num1 == num2)
        printf("The numbers %d and %d are equal", num1, num2);
    else
        printf("The numbers %d and %d are not equal", num1, num2);
    return 0;
}
