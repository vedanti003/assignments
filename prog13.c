// convert upper case into lower case

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    
    printf("Enter an uppercase letter: ");
    scanf("%c", &ch);
    
    char lowerCh = tolower(ch);
    
    printf("Lowercase letter: %c\n", lowerCh);
    
    return 0;
}
// lowercase into upper case

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    
    printf("Enter a lowercase letter: ");
    scanf("%c", &ch);
    
    char upperCh = toupper(ch);
    
    printf("Uppercase letter: %c\n", upperCh);
    
    return 0;
}
