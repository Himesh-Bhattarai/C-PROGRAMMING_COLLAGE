// Convert Fahrenheit to Celsius
#include <stdio.h>
int main(){
    float F, C;
    printf("Value of Fahrenheit: \n");
    scanf("%d",&F);

    C = (F − 32) × 5/9;

    printf("Converted value of celsius is: \n", C);
    return 0;
    
}