#include <stdio.h>
void area(int length, int breadth);//Decleration of Functuon 
int main(){
int l,b;


//call the functions
area(l,b);
return 0;
}

//function 
void area(int length, int breadth){
    printf("Area of rectangle is %d \n", length * breadth)
}
