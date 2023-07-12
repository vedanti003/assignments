//	Check weather the number is even or odd
#include <stdio.h>

int is_even(int number) {
    return number % 2 == 0;
}

int main() {
    int num = 12;
    
    if (is_even(num)) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}
	
