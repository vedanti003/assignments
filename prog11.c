// Count the number of set bits in a number
#include <stdio.h>

int countSetBits(int number) {
    int count = 0;
    
    while (number != 0) {
        if (number & 1)  
            count++;
        
        number >>= 1;  
    }
    
    return count;
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int setBitCount = countSetBits(number);
    
    printf("Number of set bits: %d\n", setBitCount);
    
    return 0;
}
