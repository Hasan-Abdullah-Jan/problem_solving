#include <stdio.h>

int main() {
    int i, students;
    double marks, avg, total_marks;
    printf("Enter the number of Students: ");
    scanf("%d", &students);
    avg = 0;


    for (i=1; i <= students; i++) {
        printf("Enter the Marks for student %d: ", i);
        scanf("%lf", &marks);
        total_marks += marks;

    }
    avg = total_marks / students;
    printf("The Average Marks of %d Students is: %.2f", students, avg);

    return 0;
}
