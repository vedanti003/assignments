//	Remove the last set bit of a number

#include <stdio.h>

int remove_last_set_bit(int number) {
    return number & (number - 1);
}

int main() {
    int num = 12; // Binary: 1100
    int result = remove_last_set_bit(num);
    printf("The number after removing the last set bit: %d\n", result);

    return 0;
}
