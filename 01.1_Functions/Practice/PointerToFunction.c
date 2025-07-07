#include <stdio.h>
void update(int *ptr);//declear function

int main(){
    int number = 7;
    printf("Before Function call %d\n", number);
    update(&number)// we call function and pass int number = 7
    
    printf("After Function calll %d\n", number);
    return 0;

    
}

// Function 
void update(int *ptr){
    *ptr = *ptr + 10;
}