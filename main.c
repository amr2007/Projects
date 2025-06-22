#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize random number generator
    srand(time(0)); // Seed based on current time

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int gussed_number;

    // Output the result
    // printf("Random number between 1 and 100: %d\n", randomNumber);
// game loop 
    do
    {
        printf("Guess the number ");
        scanf("%d", &gussed_number);
        if (gussed_number > randomNumber)
        {
            printf("Lower number please!\n");
        }
        else if (gussed_number < randomNumber)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("Congrats!!\n");
        }
        no_of_guesses++;

    } while (gussed_number != randomNumber);

    printf("You gussed the number in %d gusses ", no_of_guesses);
    return 0;
}
