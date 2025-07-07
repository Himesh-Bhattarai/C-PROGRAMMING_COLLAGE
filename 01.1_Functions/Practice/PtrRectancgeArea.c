#include <stdio.h>
void rectangle(int *l, int *b);

int main(){
    int l;
    int b;
    printf("Enter the length and brea of Rectang;e");
    scanf("%d %d", &l, &b );
    printf("value before call the function");
    rectangle(&l, &b);
    printf("Value After call the Function");

    return 0;

}

void rectangle(int *l, int *b){
    printf("The area of rectangle is %d\n", (*l)*(*b));
}