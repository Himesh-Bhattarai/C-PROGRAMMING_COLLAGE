// Compute compound interest
// CI= P(1+ r/n )^nt - p
#include <stdio.h>
int main(){
    float P, R, N, CI;

    printf("Enter the value of Principle Amount(p)\n");
    scanf("%f", P);

    printf("Enter the value of Rate(R)\n");
    scanf("%f", R);

    printf("Enter the value of Number of Times(N)\n");
    scanf("%f", N);

    CI = P * (1 + R/N)^N*T - P;

    printf("Compound Intrest(CI):",CI);

    return 0;

}
 