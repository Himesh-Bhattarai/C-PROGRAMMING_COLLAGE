// ?Swap two numbers without using a temporary variable

#include <stdio.h>
int main(){
    int num,num2;
    printf("Enter value of x and y to swap: \n");
    scanf("%d %d", &num, &num2);

    printf("Enter num x is %d, y if %d", num, num2);

    num = num + num2;  
    num2 = num - num;
    num = num - num2; 

return 0;
}