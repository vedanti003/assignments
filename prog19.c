// calculate xor for 1 to n

#include <stdio.h>

int calculateXOR(int n) {
    int rem = n % 4;
    
    if (rem == 0)
        return n;
    if (rem == 1)
        return 1;
    if (rem == 2)
        return n + 1;
    
    return 0;
}

int main() {
    int n;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    int xorValue = calculateXOR(n);
    
    printf("XOR of numbers from 1 to %d: %d\n", n, xorValue);
    
    return 0;
}
