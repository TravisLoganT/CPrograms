#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int HIGHER = 100;
int LOWER = 1;
int RANGE = 100 - 1;
int USERNUM;
int CORRECT = 0;

/*
Ask the user to select a number. Then the program (computer) should guess and ask the user whether it's guess is correct, higher or lower. 
The user enters an appropriate response. It is up to you to decide how the user indicates correct, higher or lower (hint: string comparison is best avoided). 
Your program should implement a sensible guessing strategy. Try to implement the optimal strategy.
*/

int getNumber(){
    printf("Please enter the number you would like to use: ");
    scanf("%d", &USERNUM);

    return USERNUM;
}

int generateGuess(){
    RANGE = HIGHER - LOWER;

    srand(time(NULL));
    int guessedNumber = rand() % (RANGE + 1) + LOWER;

    return guessedNumber;
}

int isCorrect(int compNum){
    char highLow[10];

    printf("Is %d higher or lower then your number? ", compNum);
    scanf("%s", highLow);

    if (strcmp(highLow, "Yes") == 0 || strcmp(highLow, "yes") == 0){
        printf("The computer has guessed your Number!");
        exit(0);
    }
    else if (strcmp(highLow, "Higher") == 0 || strcmp(highLow, "higher") == 0) {
        HIGHER = compNum;
        return CORRECT;
    } else if (strcmp(highLow, "Lower") == 0 || strcmp(highLow, "lower") == 0) {
        LOWER = compNum;
        return CORRECT;
    } else {
        printf("You have not inputted a valid comparison");
        return CORRECT;
    }
}

void play(){
    while(1){
        int computerGuess = generateGuess();
        isCorrect(computerGuess);
    }
}

int main(){
    getNumber();
    play();

    return 0;
}