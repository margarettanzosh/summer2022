#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

bool guess(int number);

int main(void)
{
    // Seed the random number generator
    srand(time(NULL));

    // Limit the possible numbers generated to [1, 100]
    int number = rand() % 100 + 1;
    printf("Try to guess my secret number between 1 and 100!\n");

    // Keep calling guess until we're correct
    bool result;
    do
    {
        result = guess(number);
    }
    while (!result);
}

// TODO: Complete the function guess
bool guess(int number)
{
    // Get a guess from the user
    int myguess = get_int("Enter a guess: ");

    // If out of range, yell at the user!
    if (myguess < 1 || myguess > 100)
    {
        printf("You didn't listen! Please enter a number between 1 and 100!\n");
        return false;
    }

    // If too low
    if (myguess < number)
    {
        printf("Your guess is too low!\n");
        return false;
    }
    // If too high
    else if (myguess > number)
    {
        printf("Your guess is too high!\n");
        return false;
    }
    // Must be just right!
    else
    {
        printf("Your guess is right!\n");
        return true;
    }
}
