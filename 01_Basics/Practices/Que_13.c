// Compute simple interest?
#include <stdio.h>
int main(){
    float p,t,r,SI;

    printf("Enter the value of P(Amount): ");
    scanf("%f", &p);

     printf("Enter the value of T(Time): ");
    scanf("%f", &t);

     printf("Enter the value of R(Rate): ");
    scanf("%f", &r);
 
    SI = (p * t * r) / 100;

    printf("Simple intrest(SI) is: %f", SI);

    return 0;

    


}