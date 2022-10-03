#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* 
Write a program that picks a random number between 1 and 100 inclusive. 
It then prompts the user to guess the number. If the user guesses correctly, 
print out a message of congratulations and exit. Otherwise, tell the user whether their guess was low or high and ask them to guess again. 
Repeat the process. If the user takes more than 7 guesses, tell them they need to think harder and exit. 
You should use library functions srand and rand to seed and generate a random number. 
The time function provides a good starting point for srand.
*/



int getRandNumber(){
    // Get and return a number from the computer that is between 1 and 100.
    srand(time(NULL));
    int randomNum = rand() % 101;

    // Redo if number is 0.
    if (randomNum == 0){
        getRandNumber();
    }

    return randomNum;
}

int getNumber(){
    
    int numGuess;
    printf("\nPlease enter a number that you would like to guess: ");
        scanf("%d", &numGuess);
}

void checkGuess(int num, int rand, int guesses){
    if (num > rand){
            printf("This number is too high\n");
            guesses++;
        }
        else if(num < rand){
            printf("This number is too low\n");
            guesses++;
        }
        else if (num == rand){
            showStats(guesses);
        }
        else {
            printf("You have not inputted a valid input.");
        }
}

void showStats(int guesses){
    printf("You have guessed!\n");
    printf("It took you %d guesses", guesses);
}

void guessNumber(int random){
    int guessCount = 0;
    int num = getNumber();

    while(1) { checkGuess(num, random, guessCount); }
}

int main(){

    guessNumber(getRandNumber());

    return 0;
}