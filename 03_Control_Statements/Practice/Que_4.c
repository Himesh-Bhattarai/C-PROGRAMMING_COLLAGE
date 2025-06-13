// Check if a character is a vowel or consonant?
#include <stdio.h>
int main(){
    char letter;

    printf("Enter Any Char: ");
    scanf("%c", &letter);

    if( letter = 'a', 'e', 'i', 'o', 'u'){
        printf("The char %c is Vowel", letter);
    }else{
        printf("%c is Consonant");
        
    }
}