// Function to swap two value by calling by reference
#include <stdio.h>
void swap_by_refrence(int *a, int *b);

int main(){
int a;
int b;

//ask uert input
printf("Enter First Number: ");
//store into "a", "b" variables
scanf("%d", &a);

printf("Enter second Number: ");
// store into "a", "b" variables
scanf("%d", &b);



printf("Before Swapping value of a is: %d\n,b is %d\n", a, b);
//Call the swap_by_refrence function
swap_by_refrence(&a, &b);

// Print the swapped values
printf("After Swapping value of a is: %d\n,b is %d\n", a, b);

return 0;
}


void swap_by_refrence(int *a, int *b){
    // Step 1: Create a temporary variable to hold the value of a
    int temp = *a;

    // Step 2: Assign the value of b to a
    *a = *b;

    // Step 3: Assign the value of temp (original a) to b
    *b = temp;
}