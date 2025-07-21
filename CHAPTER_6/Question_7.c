// HCF
#include <stdio.h>

int main(){
    int number, number_2;
    int factorial_1, factorial_2;
    int HCF;

    printf("Enter any two numbers you want to find HCF for: \n");
    scanf("%d%d", &number, &number_2);

    for(int i = 1; i < number; i++){
        if(number % i == 0){
            factorial_1 = i;
        }
    }

}