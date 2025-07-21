// FUnction to convert string to uppper to lower and lower to upper by using refrence methods
#include <stdio.h>
#include <ctype.h>
//decleare the function
void string_upper(char *user_string);
void string_lower(char *user_string);

int main(){
//Declreare variablet to store char
char user_string[50];
//Ask for sentences or a string
printf("Enter a string: \n");
//store into variable
scanf(" %[^\n]", &user_string);
//print the string before conversion
printf("String before conversion id %s\n", user_string);
//call the function
string_lower(user_string);
printf("String after conversion is %s\n", user_string);
string_upper(user_string);
printf("String after conversion is %s\n", user_string);

//exist the programm
return 0;
}

void string_upper(char *user_string){
   for(int i = 0; user_string[i] != '\0'; i++){
    user_string[i] = toupper(user_string[i]); // Convert each character to uppercase

   }
    
}

void string_lower(char *user_string){
    for(int i = 0; user_string[i] != '\0'; i++){
        user_string[i] = tolower(user_string[i]); // Convert each character to lowercase
    }
   

}