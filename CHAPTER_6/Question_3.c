#include <stdio.h>

int main()
{
    int i, num;
    int factorial = 1; // start from 1

    printf("Enter the number to find factorial:\n");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        factorial *= i;
    }

    printf("The factorial of number %d is: %d\n", num, factorial);

    return 0;
}
