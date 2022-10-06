#include <stdio.h>

int simple_multiplication(int number) {
  
  if  (number % 2 == 0){
    return number * 8;
  }
  else{
    return number * 9;
  }
}

int main(int argc, char const *argv[])
{
    printf("%i" , simple_multiplication(5));
    return 0;
}
