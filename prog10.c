// toggle the ith bit of a number
#include <stdio.h>

int toggleBit(int number, int i) {
    int mask = 1 << i;  
    return number ^ mask;  
}

int main() {
    int number, i;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    printf("Enter the bit position to toggle (0-31): ");
    scanf("%d", &i);
    
    int toggledNumber = toggleBit(number, i);
    
    printf("Number after toggling the %d-th bit: %d\n", i, toggledNumber);
    
    return 0;
}
