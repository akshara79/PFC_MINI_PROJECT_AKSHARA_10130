#include <stdio.h>
//akshara sharma 10130 
int main() {
    // Declare variables for marks, total, percentage, and grade
    int sub1, sub2, sub3, sub4, sub5, total_marks;
    float percentage;
    char grade = 'F'; // Initialize grade to 'F' by default
    int max_per_subject = 100;
    int num_subjects = 5;
    int max_total_marks = max_per_subject * num_subjects;

    
    // Take marks as individual inputs
    printf("Enter marks for 5 subjects (out of 100 each):\n");
    printf("Subject 1: ");
    scanf("%d", &sub1);
    printf("Subject 2: ");
    scanf("%d", &sub2);
    printf("Subject 3: ");
    scanf("%d", &sub3);
    printf("Subject 4: ");
    scanf("%d", &sub4);
    printf("Subject 5: ");
    scanf("%d", &sub5);

    // Calculate total marks and percentage
    total_marks = sub1 + sub2 + sub3 + sub4 + sub5;
    // Typecast to float for accurate percentage calculation
    percentage = ((float)total_marks / max_total_marks) * 100;

    // Use nested if-else to assign grades based on percentage ranges
    if (percentage >= 90) {
        grade = 'A';
    } else { // percentage is < 90
        if (percentage >= 80) {
            grade = 'B';
        } else { // percentage is < 80
            if (percentage >= 70) {
                grade = 'C';
            } else { // percentage is < 70
                if (percentage >= 60) {
                    grade = 'D';
                } else { // percentage is < 60
                    if (percentage >= 50) { // Example threshold, adjust as needed
                        grade = 'E';
                    } else { // percentage is < 50
                        grade = 'F';
                    }
                }
            }
        }
    }

    // Print results
    printf("\n--- Student Result ---\n");
    printf("Total Marks: %d / %d\n", total_marks, max_total_marks);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
/*output
Enter marks for 5 subjects (out of 100 each):
Subject 1: 80
Subject 2: 60
Subject 3: 79
Subject 4: 93
Subject 5: 85

--- Student Result ---
Total Marks: 397 / 500
Percentage: 79.40%
Grade: C
*/