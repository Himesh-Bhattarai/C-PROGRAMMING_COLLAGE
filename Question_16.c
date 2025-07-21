#include <stdio.h>
#include <math.h>  // Needed for pow()

// Function prototypes
float comp_int_calc(float int_amt, float rate, int years);
float simple_interest_calc(float int_amt, float rate, int years);

int main() {
    // Declare variables
    float int_amt, rate, compound_interest, SI;
    int years;
    char choice;

    do {
        // Prompt user for input
        printf("Enter the Initial Amount: ");
        scanf("%f", &int_amt);

        printf("Enter the Interest Rate (in percentage): ");
        scanf("%f", &rate);

        printf("Enter the Number of Years: ");
        scanf("%d", &years);

        // Confirm input
        printf("\nYou entered:\nInitial Amount: %.2f\nInterest Rate: %.2f%%\nNumber of Years: %d\n", int_amt, rate, years);
        printf("Do you want to edit the values? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    // Call the functions
    compound_interest = comp_int_calc(int_amt, rate, years);
    SI = simple_interest_calc(int_amt, rate, years);

    // Display results
    printf("\nThe Compounded Interest is: %.2f\n", compound_interest);
    printf("The Simple Interest is: %.2f\n", SI);

    return 0;
}

// Function to calculate compounded interest
float comp_int_calc(float int_amt, float rate, int years) {
    return int_amt * pow((1 + rate / 100), years) - int_amt;
}

// Function to calculate simple interest
float simple_interest_calc(float int_amt, float rate, int years) {
    return (int_amt * rate * years) / 100;
}
