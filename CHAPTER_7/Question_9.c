// Sum of digits of a number
#include <stdio.h>
// Notice the function should be declared before the main function.
void sum_of_digits(int number);

int main()
{
    // Step 1: Decleare variables
    int number;
    // Step2 : Ask user imput. number can contain any number of digits
    prinf("Enter a number: ");
    // Srep 3: Store the number in a varibale
    scanf("%d", &number);
    // step 4: Call the function
    sum_of_digits(number);

    // step  5: print the reasult either directly print reasult form function. But here we going to return 0 to close the program.
    return 0;
};

// Step 1: Write a function to calculate the sum of digits
void sum_of_digits(int number)
{
    int sum = 0;

    while (number > 0){ // Explaination: loop run until number is grater the 0, lets assum number is 1000
//step 1: we need to get last digit of number so we use modulus operator for eg, uder in sum there is still 0 "+"  number 1000 /10 = 100, 100/10 = 10, 10/10 = 1, 1/10 = 0, 0/10 = 0, 0/10 = 0, 0/10 = 0, 0/10 = 0, 0/10 = 0, 0/10 = 0, 0/10 = 0, 0/10 = 0, 0/10 = 0, 0/10 = 0, 0/so we use modulus operator for get last digit
        // step 2: add the last digit to the 
        sum += number % 10; // this will give us the last digit of Number

        //step 3: Remove that last digit form the number so divide by 10
        number /= 10; // this will remove the last digit from the number
    };
    printf("Sum of digits: %d\n", sum); // Print the sum of digits
        
    }

    /* 
    // Full Explaination of the code
    // Step 1: Declare variables
    // Step 2: Ask user input
    // Step 3: Store the number in a variable
    // Step 4: Call the function
    // Step 5: Print the result

    // Step 6: Write a function to calculate the sum of digits
    // Step 7: Loop until the number is greater than or equal to 0, like Never ending loop
    // Step 8: Get the last digit of the number using modulus operator
    // Step 9: Add the last digit to the sum
    // Step 10: Remove the last digit from the number using division operator
    // Step 11: Print the sum of digits
    // Step 12: Return 0 to close the program

    */


