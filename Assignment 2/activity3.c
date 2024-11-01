// Write a C program to find the sum of all elements in an integer array. 

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5}, sum = 0; 
    for (int *ptr = arr; ptr < arr + 5; ptr++) sum += *ptr; 
    printf("Sum: %d\n", sum); 
    return 0; 
}



