// Generate prime numbers from 1 to 100
// Pracice using modulo, for loops, boolean function

#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void)
{
    for (int i = 2; i < 100; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}
