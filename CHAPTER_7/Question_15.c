#include <stdio.h>

// Declare the function
void separate_number(int numbers);

int main()
{
    int numbers;

    // Step 2: Run the loop
    while (1)
    {
        // Step 2: Ask for number
        printf("Enter a number: ");
        scanf("%d", &numbers);

        // Step 4: Check for negative or zero
        if (numbers <= 0)
        {
            printf("The number is zero or negative and cannot be processed.\n");
            break;
        }

        // Step 7: Call the function
        separate_number(numbers);

        // Step 8: Ask user to continue
        char choice;
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);
        if (choice != 'y' && choice != 'Y')
        {
            break;
        }
    }

    // Step 9: Exit
    return 0;
}

void separate_number(int numbers)
{
    int millions, thousands, hundreds, tens, units;

    // Step 5: Break down number
    millions = numbers / 1000000;
    thousands = (numbers % 1000000) / 1000;
    hundreds = (numbers % 1000) / 100;
    tens = (numbers % 100) / 10;
    units = numbers % 10;

    // Step 6: Print result
    printf("Millions: %d\n", millions);
    printf("Thousands: %d\n", thousands);
    printf("Hundreds: %d\n", hundreds);
    printf("Tens: %d\n", tens);
    printf("Units: %d\n", units);
}
// Full Explanation of the code
// The code is a C program that separates a given number into its individual digits (millions, thousands, hundreds, tens, and units) and prints the results. Here's a breakdown of the code:
// 1. The program starts by including the necessary header file <stdio.h> for input/output operations.
// 2. It declares a function `separate_number` that takes an integer as an argument.
// 3. The `main` function begins an infinite loop to repeatedly ask the user for a number.          
// 4. Inside the loop, it prompts the user to enter a number and reads it using `scanf`.
// 5. It checks if the entered number is less than or equal to zero. If so, it prints a message indicating that the number cannot be processed and breaks out of the loop.
// 6. If the number is valid, it calls the `separate_number` function to break down the number into its components.
// 7. The `separate_number` function calculates the millions, thousands, hundreds, tens, and units by performing integer division and modulus operations.
// 8. It then prints the separated values.          
// 9. After processing the number, the program asks the user if they want to continue. If the user enters 'y' or 'Y', the loop continues; otherwise, it breaks out of the loop and exits the program.
// 10. Finally, the program returns 0 to indicate successful execution.
// This program effectively demonstrates how to separate a number into its individual components and handle user input in a loop.
// The code is structured to handle both positive and negative numbers, but it only processes positive numbers, as specified in the prompt. If a negative number or zero is entered, it informs the user and exits the loop.

