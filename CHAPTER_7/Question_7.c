#include <stdio.h>
// declre function prototype
void which_is_largest(int a, int b, int c);
int main()
{
    // Decleare variables
    int a, b, c;

    // Ask for user input
    printf("Enter three Numbers: \n");

    // Store then in Variables
    scanf("%d %d %d", &a, &b, &c);
    // call the Function
    which_is_largest(a, b, c);

    return 0;
};

// write a block of code to find largest number among three numbers
void which_is_largest(int a, int b, int c)
{
    if (a >= b && a >= c)
    {
        printf("Largest number is %d\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("Largest number is %d\n", b);
    }
    else if (c >= a && c >= b)
    {

        printf("Largest number is %d\n", c);
    }
    else
    {
        printf("All numbers are equal");
    }
}
