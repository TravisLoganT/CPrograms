#include <stdio.h>

/* 
If a number is exactly divisible by 2 then its an even number else it is an odd number.
1) Using Modulus operator(%) 2) Using Bitwise operator.
*/

void modOddEven(int number){
    
    if (number % 2 == 0){
        printf("This is a even number");
    }
    else{
        printf("This is a odd number");
    }

}

int getNumber(){
    int num;
    printf("Please enter a number: ");

    scanf("%d", &num);

    return num;
}

int main(){
    int num = getNumber();
    modOddEven(num);

}