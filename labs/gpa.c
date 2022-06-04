// Practice for loops and summing up values in a loop

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get the number of grades and validate input
    int n;
    do
    {
        n = get_int("Number of grades to average: ");
    }
    while (n <= 0);

    // Declare a variable for sum and initialze to zero
    float sum = 0;

    // Ask for grades from the user and total them in sum
    for (int i = 0; i < n; i++) {
        float grade = get_float("Enter a grade: ");
        sum += grade;
    }

    // Print out average GPA with one decimal point
    printf("Your cumulative GPA is: %.1f\n", sum / n);
}
