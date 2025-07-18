//Factorial of number using functuion

#include <stdio.h>
void is_factorial(int number);

int main(){
// Declear veialble
int number; 

//ask for user input
printf("Enter a number: \n");
//store in Number variable
scanf("%d", &number);

//pass the number which store in varibale number to is_factorial function like that
is_factorial(number);

return 0;
};

void is_factorial(int number){
  int factorial = 1;
  int i;

  //loop to calculate factorial 
  for(i = 1; i<=number; i++){
    factorial *= i;
  };
  printf("factorial of %d is %d \n",number, factorial);

};