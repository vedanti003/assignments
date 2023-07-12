//find letter position in alphabet

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    
    printf("Enter a letter: ");
    scanf("%c", &ch);
    
    ch = toupper(ch);
    
    int position = ch - 'A' + 1;
    
    if (position >= 1 && position <= 26) {
        printf("Position in the alphabet: %d\n", position);
    } else {
        printf("Invalid input. Please enter a letter.\n");
    }
    
    return 0;
}
