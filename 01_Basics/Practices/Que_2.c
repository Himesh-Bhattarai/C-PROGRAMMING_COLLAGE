// Display ASCII value of a character?
#include <stdio.h>
int main(){
    char character;
    printf("Enter char to find ASCII VALUE \n");
    scanf("%c", &character);

    printf("ASCIT VALUE OF %C IS %D", character, character);
    return 0;
}