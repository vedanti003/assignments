//Clear the ith bit of a number

#include <stdio.h>

int clear_ith_bit(int number, int i) {
    int mask = ~(1 << i); 
    return number & mask;
}

int main() {
    int num = 12; 
    int bit_index = 2;
    int result = clear_ith_bit(num, bit_index);
    printf("The number after clearing the %dth bit: %d\n", bit_index, result);

    return 0;
}
