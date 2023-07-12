//find the two non repeating elements in an array of repeating elements/Unique numbers 2

#include <stdio.h>

void findNonRepeatingElements(int arr[], int size, int* num1, int* num2) {
    int xor_result = 0;
    int i, rightmost_set_bit;
    
    for (i = 0; i < size; i++) {
        xor_result ^= arr[i];
    }
    
    rightmost_set_bit = xor_result & -xor_result;
    
    *num1 = 0;
    *num2 = 0;
    
    for (i = 0; i < size; i++) {
        if (arr[i] & rightmost_set_bit)
            *num1 ^= arr[i];
        else
            *num2 ^= arr[i];
    }
}

int main() {
    int arr[] = {2, 4, 7, 9, 2, 4, 5, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num1, num2;
    
    findNonRepeatingElements(arr, size, &num1, &num2);
    
    printf("Non-repeating elements: %d and %d\n", num1, num2);
    
    return 0;
}
