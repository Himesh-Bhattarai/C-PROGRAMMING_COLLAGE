// Calculate the area of a circle
#include <stdio.h>
const PI = 3.
int main(){
    float area;
    float redius;

    printf("Enter the radius of Circle: \n");
    scanf("%f",&redius);

    area = PI*redius*redius;
    printf("The Area of  circle, whose radius is %f : %f", redius, area);
    return 0;
    
}