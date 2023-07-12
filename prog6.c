//	Check if the number is a power of 2

#include <stdio.h>

int is_power_of_two(int number) {
    if (number <= 0) {
        return 0;  // Not a power of 2
    }

    return (number & (number - 1)) == 0;
}

int main() {
    int num = 16;

    if (is_power_of_two(num)) {
        printf("%d is a power of 2.\n", num);
    } else {
        printf("%d is not a power of 2.\n", num);
    }

    return 0;
}
