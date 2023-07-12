// check if the number is power of 2 4 8 16
#include <stdio.h>

int isPowerOf(int num, int base) {
    if (num <= 0)
        return 0;

    if ((num & (num - 1)) != 0)
        return 0;

    if (num % base == 0)
        return 1;

    return 0;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPowerOf(num, 2))
        printf("%d is a power of 2.\n", num);

    if (isPowerOf(num, 4))
        printf("%d is a power of 4.\n", num);

    if (isPowerOf(num, 8))
        printf("%d is a power of 8.\n", num);

    if (isPowerOf(num, 16))
        printf("%d is a power of 16.\n", num);

    if (!isPowerOf(num, 2) && !isPowerOf(num, 4) && !isPowerOf(num, 8) && !isPowerOf(num, 16))
        printf("%d is not a power of 2, 4, 8, or 16.\n", num);

    return 0;
}
