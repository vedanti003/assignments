// convert lower case into upper

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
