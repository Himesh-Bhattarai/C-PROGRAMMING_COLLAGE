#include <stdio.h>
int mult(int x, int y);
int div(int x, int y);
int min(int x, int y);
int plus(int x, int y);

 int main(){

    char Sign;
    int X, Y;
    
    printf("What do u want to do(+, - , * , /). Just enter the sign:\n");
    scanf("%c", &Sign);
    

    printf("Enter the Two Number For your THing: \n");
    scanf("%d%d",&X,&Y);
if (Sign == '-'){
    min();

}else if(Sign == '+'){
    plus();
    
}else if(Sign == '*'){
    mult();

}else(Sign == '/'){
    div();

}
return 0;
 }
  int mult(int x, int y){
    return x * y;
  }
    int div(int x, int y){
        
        return x / y;
    }
    int min(int x, int y){
        return x - y;
    }
    int plus(int x, int y){
        return x + y;
    }

