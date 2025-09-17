#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(){

    int guess;
    int maxAttempts = 3;
    int attempts = 0;
    int secNumber = 5;
    int outOfGuesses = 0;

    while (guess != secNumber && outOfGuesses == 0)
    {
        if (attempts < maxAttempts)
        {
            printf("Please guess a number: ");
            scanf("%d", &guess);
            attempts++;
        }
        else {
            outOfGuesses = 1;

        }
    }
    if (outOfGuesses == 1)
    {
        printf("You ran out of attempts. You lost.\n");
    }
    else{

        printf("You won!\n");
    }





    return 0;
}