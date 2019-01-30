#include<stdio.h>

// Prototypes
int getLIWLUDigitCount(int* ary, int size);


int main () {
    
    return 0;
}


// Functions
int getLIWLUDigitCount(int* ary, int size) {

    int largest;

    // get the size of the arry and use sizeof() for memory allocation with malloc()
    int* iPtr = malloc(size, sizeof(int));

    // Input

    // First integer
    scanf("%d", iPtr);

    // Next pointer address block (pointer math)
    scanf("%d", iPtr + 1);
    scanf("%d", iPtr + 2);

    // Free up memory
    free(iPtr);

    return largest;
}