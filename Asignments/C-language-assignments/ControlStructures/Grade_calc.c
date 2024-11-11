#include <stdio.h>

int main()
{
    int marks;
    char grade;

    printf("Enter the marks (0 - 100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100)
    {
        printf("Please enter marks between 0 and 100.\n");
    }

    if (marks >= 90)
    {
        grade = 'A';
    }
    else if (marks >= 80)
    {
        grade = 'B';
    }
    else if (marks >= 70)
    {
        grade = 'C';
    }
    else if (marks >= 60)
    {
        grade = 'D';
    }
    else if (marks >= 50)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }

    printf("Grade: %c\n", grade);

    return 0;
}
