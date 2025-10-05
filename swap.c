#include <stdio.h>
int main() {
    int first, second, temp;
    printf("Enter first number: ");
    scanf("%d", &first);
    printf("Enter second number: ");
    scanf("%d", &second);
    temp = first;
    first = second;
    second = temp;
    printf("Before swapping: first=%d, second=%d\n", second, first);
    printf("After swapping: first=%d, second=%d", first, second);
    return 0;
}
