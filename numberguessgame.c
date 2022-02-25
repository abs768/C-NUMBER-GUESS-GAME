                    /*  PROJECT 1 : NUMBER GUESS GAME...*/

/*
PROBLEM STATEMENT:

We will write a program that will generate random numbers and asks
the player to guess it.If the player guess is higher than the actual number, the program
dispalys "Lower number please".Similarly if the user's guess is too low,the program prints
"Higher number please".

When the user guesses the correct number, the program display the number of guesses the
player used to arrive at the number.

Hint:
    Use Loops.
    Use a Random Number Genrator.

*/

// Code For Project 1:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, nGuesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please!!!..");
        }
        else if (guess < number)
        {
            printf("Greater number please!!!..");
        }
        else
        {
            printf("Yayy you got it !\n You took %d attempts", nGuesses);
        }
        nGuesses++;
    } while (guess != number);
    return 0;
}