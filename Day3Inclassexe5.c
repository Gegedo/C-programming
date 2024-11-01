// Print the sum of first n natural numbers.

#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

  
    printf("Enter a number: ");
    scanf("%d", &n);

  
    while (i <= n) {
        sum = sum + i;  
        i = i + 1;      
    }

        printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
