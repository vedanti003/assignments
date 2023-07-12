//Check if the ith bit is set ir not

#include <stdio.h>

int is_ith_bit_set(int number, int i) {
    int mask = 1 << i; // Shift 1 to the left by i positions
    return (number & mask) != 0;
}

int main() {
    int num = 12; // Binary: 1100
    int bit_index = 2;
    int is_set = is_ith_bit_set(num, bit_index);
    printf("The %dth bit of %d is %sset.\n", bit_index, num, is_set ? "" : "not ");

    return 0;
}
