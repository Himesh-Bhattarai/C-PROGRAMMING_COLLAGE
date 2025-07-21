//   # programm to check weather number is  amicable or not

#include <stdio.h>
int main()
{
    int num, num2, sum1, sum2, i;

    printf("enter first number:");
    scanf("%d", &num);

    printf("Enter second numbre: ");
    scanf("%d", &num2);

    sum1 = 0;
    sum2 = 0;

    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum1 += i;
        }
    }

    for (i = 1; i < num2; i++)
    {
        if (num2 % i == 0)
        {
            sum2 += i;
        }
    }

    // checking if the numbers are amicable
    if (sum1 == num2 && sum2 == num)
    {
        printf("%d and %d are amicable numbers", num, num2);
    }
    else
    {
        printf("%d and %d are not amicable numbers", num, num2);
    }
    return 0;
}