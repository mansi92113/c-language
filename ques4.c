#include <stdio.h>

int main() {
    int rollNo;
    char name[50];
    float maths, english, science;
    float total, percentage;
    char grade;

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter Name: ");
    scanf(" %s", name);
    printf("Enter marks for three subjects:\n");
    printf("Maths: ");
    scanf("%f", &maths);
    printf("english: ");
    scanf("%f", &english);
    printf("Science : ");
    scanf("%f", &science);

    total = maths + english + science;
    percentage = (total / 300) * 100;


    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else if (percentage >= 50) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    printf("\n==Student Report==\n");
    printf("Roll Number: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Marks in Maths: %.2f\n", maths);
    printf("Marks in English 2: %.2f\n", english);
    printf("Marks in Science 3: %.2f\n", science);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
