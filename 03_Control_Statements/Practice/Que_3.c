// Find the largest among three numbers?
#include <stdio.h>
int main(){
    printf("Enter Any Threee Numbers.\n");
    printf("X =\n ");
    scanf("%d", &X);

    printf("Y = \n");
    scanf("%d", &Y);

    printf("Z = \n")
    scanf("%d", &Z);

    //Locgic to fin lareges by using control Statement;
    if(X > Y > Z){
        printf("X is The Largest Among Three Numnbers, Which is %d", X );
    else if(Y > X > Z){
        printf("Y is The largest Among Three Numbers, Which is %d", Y);

    }else{
        printf("Z is The Largest Among Three Numnbers, Which is %d", Z );

    }

    return 0;

}
}