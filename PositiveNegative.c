#include <stdio.h>

// A program to check whether the input integer number is positive or negative. 

int getNumber(){
    int number; 

    printf("\nPlease enter a number: ");
    scanf("%d", &number);
    
    return number;
}

void checkPosNeg(int number){

    if (number == 0){
        printf("You have inputted 0");
    }
    else if(number > 0){
        printf("You have inputted a positive number");
    }
    else if (number < 0){
        printf("You have inputted a negative number");
    }
}

int main(){
    checkPosNeg(getNumber());
}