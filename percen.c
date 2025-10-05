int main() {
    int sub1, sub2, sub3, sub4, sub5, total;
    float percentage;
    printf("Enter marks of 5 subjects: ");
    scanf("%d%d%d%d%d", &sub1, &sub2, &sub3, &sub4, &sub5);
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total / 500.0) * 100;
    printf("Marks obtained in subjects: %d, %d, %d, %d, %d\n", sub1, sub2, sub3, sub4, sub5);
    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%%", percentage);
    return 0;
}

