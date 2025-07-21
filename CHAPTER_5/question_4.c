// Check user input is perfect number or not
#include <stdio.H>

int main()
{

    // Variable declaration
    int number;
    int sum = 0, i;

    //ask user to enter a number and store in number veriable

    printf("Emter any number to check weather its a perfect number or not: \n");
    scanf("%d", &number);

    //start loop form one to user input number and if user input is divided by any number then that number add to sum for eg user number is 6 then loop check form 1, does 6 /1 == 0 then add 1 to sum,then check 6/2 ==0 then add 2 to sum and 6/3 == 0 then add three to sum and 6/4 == 0? no yhen skip and so on at last we get three sum number which are 1, 2,3 so sum is 6 which is equal to user input number so it perfect number.
    for (i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }

    //this statement check user number is equal to sum number and user number is not equal to zero then it is perfect number else not a perfect number

    if (sum == number && number != 0)
    {
        printf("the number %d is a perfect number\n", number);
    }
    else
    {
        prinf("the number %d is not a perfect number \n", number);
    }
    //exit from program
    return 0;
}