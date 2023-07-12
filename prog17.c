// given a set of numbers where all elements occur an even number of times except one number, find the odd occuring numbers

#include <stdio.h>

int findOddOccurringNumber(int arr[], int size) {
    int result = 0;
    
    for (int i = 0; i < size; i++) {
        result ^= arr[i];
    }
    
    return result;
}

int main() {
    int arr[] = {2, 4, 6, 2, 4, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int oddOccurringNumber = findOddOccurringNumber(arr, size);
    
    printf("Odd occurring number: %d\n", oddOccurringNumber);
    
    return 0;
}
