// Check if a number is even or odd using if-else

#include <stdio.h>
int main(){
    int Number;
    printf("Enter the number To check it either even or odd: ");
    scanf("%d", &Number);

    if(Number % 2 == 0){
        printf("Your Number is Even: ");

    }else{
        printf("Your Number is Odd");
    }
return 0;
}
