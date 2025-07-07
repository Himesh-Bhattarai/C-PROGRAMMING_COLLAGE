#include <stdio.h>
void swap(int *num, int *num1);

int main(){
    int num, num1;
printf("Enter the two value for num and num1 /n", num, num1);
scanf("%d %d", &num , &num1);
printf("Before calll the function");
swap(&num, &num1);
printf("After calll the functiona");
return 0;
}

void swap(int *num, int *num1){
   int temp = *num;
     *num = *num1;
     *num1 = temp;
     printf("num : %d, num1 : %d", num, num1)

}
