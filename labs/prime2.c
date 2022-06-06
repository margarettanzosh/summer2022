// Generate prime numbers from 1 to 100
// Pracice using nested for loops, modulo, bool variable

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    for (int i = 2; i < 100; i++)
    {
        bool is_prime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
        {
            printf("%i\n", i);
        }
    }
}
