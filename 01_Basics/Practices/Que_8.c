// Convert Celsius to Fahrenheit
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter value in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("Converted value in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
