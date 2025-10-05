#include <stdio.h>
int main() {
    int sub1, sub2, sub3, sub4, sub5, total;
    float percentage;
    printf("Enter marks of 5 subjects: ");
    scanf("%d%d%d%d%d", &sub1, &sub2, &sub3, &sub4, &sub5);
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total / 500.0) * 100;
    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);
    if (percentage >= 90)
        printf("Grade: A");
    else if (percentage >= 80)
        printf("Grade: B");
    else if (percentage >= 60)
        printf("Grade: C");
    else
        printf("Grade: D");
    return 0;
}