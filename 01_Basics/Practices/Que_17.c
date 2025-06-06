
// Find the largest of two numbers?
#include <stdio.h>
int main()
{
    printf("Enter two numbers to compare which is largest: ");
    scanf("%d%d", num1,num2);

    if(num1 > num2 ){
        printf("%d is larger as compare to %d", num2, num1);
    }else{
        printf("%d is larger as compare to %d", num1, num2);

    }

    return 0;


}