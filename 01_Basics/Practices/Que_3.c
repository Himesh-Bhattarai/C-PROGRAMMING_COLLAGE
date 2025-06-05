// Swap two numbers using a temporary variable?

#include <stdio.h>
int main(){
    int num, num2, temp;
   //take two number form user 
    printf("Enter value of x and y to swap respectively:\n");
    //store vaue in our variable
    scanf("%d %d", &num , &num2);

    //swap logic
    num = temp;
    num2 = num;
    temp = num2;

    return 0;


}