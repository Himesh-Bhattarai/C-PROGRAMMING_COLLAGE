// Compute the average of three numbers
#include <stdio.h>
int main(){
    int x,y,z,a;

    printf("Enter value for x , y and z: ");
    scanf("%d%d%d",&x,&y,&z);

    a = (x*y*z)/ 3 ;

    printf("product of x y z is: %d", a);
    return 0
}