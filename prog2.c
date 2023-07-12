//	Set the ith bit of a number

#include <stdio.h>

int set_ith_bit(int number, int i) {
    int mask = 1 << i; 
    return number | mask;
}

int main() {
    int num = 12; 
    int bit_index = 1;
    int result = set_ith_bit(num, bit_index);
    printf("The number after setting the %dth bit: %d\n", bit_index, result);

    return 0;
}
